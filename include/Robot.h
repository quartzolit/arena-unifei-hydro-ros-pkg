/**
 *  Robot.h
 *
 *  Version: 1.0.0.0
 *  Created on: 11/03/2015
 *  Modified on: 16/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#ifndef ROBOT_H_
#define ROBOT_H_

#define PI 3.14159
#define sign(a) (((a) < 0) ? -1 : (((a) > 0) ? 1 : 0))

#include <ros/ros.h>
#include <string>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/Twist.h>
#include <tf/transform_datatypes.h>

class Robot {

public:

	Robot(ros::NodeHandle nh, std::string name, bool holonomic = false);
	~Robot();

	void spin();
	void spinOnce();
	std::string getName();
	std::string getHostname();
	std::string getPort();
	bool isHolonomic();
	void setVelocity(double vel_x, double vel_y, double vel_phi);
	void resetOdometry();

protected:
	
	void setHostname(std::string hostname);
	void setPort(std::string port);
	void setHolonomic(bool holonomic);

private:

	ros::NodeHandle nh_;
	std::string name_;
	std::string hostname_;
	std::string port_;
	geometry_msgs::Twist cmd_vel_msg_;
	ros::Publisher cmd_vel_pub_;
	ros::Subscriber odom_sub_;
	bool odom_setted_;
	bool holonomic_;
	double min_linear_vel_, max_linear_vel_;
	double min_angular_vel_, max_angular_vel_;
	double start_x_, start_y_, start_phi_;
	double curr_x_, curr_y_, curr_phi_, prev_phi_;
	double disp_x_, disp_y_, disp_phi_;

	void readParameters();
	void publishVelocity();
	void odometryCallback(const nav_msgs::OdometryConstPtr& msg);

};

#endif /* ROBOT_H_ */
