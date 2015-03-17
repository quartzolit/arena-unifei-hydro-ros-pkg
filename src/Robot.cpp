/**
 *  Robot.cpp
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 16/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#include "Robot.h"

/**
 *
 */
Robot::Robot(ros::NodeHandle nh, std::string name, bool holonomic) {
	nh_ = nh;
	name_ = name;
	odom_setted_ = false;
	readParameters();
	holonomic_ = holonomic;
	odom_sub_ = nh_.subscribe("odom", 1, &Robot::odometryCallback, this);
	cmd_vel_pub_ = nh_.advertise<geometry_msgs::Twist>("cmd_vel", 1);
}

/**
 *
 */
Robot::~Robot() {
	cmd_vel_pub_.shutdown();
	odom_sub_.shutdown();
}

/**
 *
 */
void Robot::spin() {
	ROS_INFO("Robot up and running!!!");
	ros::Rate loop_rate(10.0);
	while (nh_.ok()) {
		spinOnce();
		loop_rate.sleep();
	}
}

/**
 *
 */
void Robot::spinOnce() {
	ros::spinOnce();
}

/**
 *
 */
void Robot::publishVelocity() {
	cmd_vel_pub_.publish(cmd_vel_msg_);
}

/**
 *
 */
void Robot::odometryCallback(nav_msgs::OdometryConstPtr& msg) {
	curr_x_ = msg->pose.pose.position.x;
	curr_y_ = msg->pose.pose.position.y;
	curr_phi_ = tf::getYaw(msg->pose.pose.orientation);
	if (!odom_setted_) {
		ROS_INFO("Odometry initialized!!!");
		odom_setted_ = true;
		prev_phi_ = curr_phi_;
	}
	disp_x_ = (curr_x_ - start_x_) * cos(-start_phi_) - (curr_y_ - start_y_) * sin(-start_phi_);
	disp_y_ = (curr_y_ - start_y_) * cos(-start_phi_) + (curr_x_ - start_x_) * sin(-start_phi_);
	while (curr_phi_ - prev_phi_ < PI) {
		curr_phi_ += 2 * PI;
	}
	while (curr_phi_ - prev_phi_ > PI) {
		curr_phi_ -= 2 * PI;
	}
	disp_phi_ += curr_phi_ - prev_phi_;
	prev_phi_ = curr_phi_;
}

/**
 *
 */
std::string Robot::getName() {
	return name_;
}

/**
 *
 */
std::string Robot::getHostname() {
	return hostname_;
}

/**
 *
 */
std::string Robot::getPort() {
	return port_;
}

/**
 *
 */
bool Robot::isHolonomic() {
	return holonomic_;
}

/**
 *
 */
void Robot::setVelocity(double vel_x, double vel_y, double vel_phi) {
	if (fabs(vel_x) > max_linear_vel_) {
		vel_x = sign(vel_x) * max_linear_vel_;
	}
	if (fabs(vel_y) > max_linear_vel_) {
		vel_y = sign(vel_y) * max_linear_vel_;
	}
	if (fabs(vel_phi) > max_angular_vel_) {
		vel_phi = sign(vel_phi) * max_angular_vel_;
	}
	cmd_vel_msg_.linear.x = vel_x;
	cmd_vel_msg_.linear.y = vel_y;
	cmd_vel_msg_.angular.z = vel_phi;
}

/**
 *
 */
void Robot::resetOdometry() {
	start_x_ = curr_x_;
	start_y_ = curr_y_;
	start_phi_ = curr_phi_;
	disp_x_ = 0.0;
	disp_y_ = 0.0;
	disp_phi_ = 0.0;
}

/**
 *
 */
void Robot::setHostname(std::string hostname) {
	hostname_ = hostname;
}

/**
 *
 */
void Robot::setPort(std::string port) {
	port_ = port;
}

/**
 *
 */
void Robot::setHolonomic(bool holonomic) {
	holonomic_ = holonomic;
}

/**
 *
 */
void Robot::readParameters() {
	nh_.param<std::string>("hn_" + name_ + "_", hostname_, "");
} 
