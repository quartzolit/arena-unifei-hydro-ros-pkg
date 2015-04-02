/**
 *  ArenaUnifei.cpp
 *
 *  Version: 1.0.0.0
 *  Created on: 17/03/2015
 *  Modified on: 17/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#include "ArenaUnifei.h"

/**
 *
 */
ArenaUnifei::ArenaUnifei() :
	amg_bot_1_(nh_, "1"),
	amg_bot_2_(nh_, "2"),
	amg_bot_3_(nh_, "3"),
	p3_dx_(nh_),
	robotino_(nh_) {
}

/**
 *
 */
ArenaUnifei::~ArenaUnifei() {

}

/**
 *
 */
void ArenaUnifei::spin() {
	ros::Rate loop_rate(10.0);
	while (ros::ok()) {
		spinOnce();
		loop_rate.sleep();
	}
}

/**
 *
 */
void ArenaUnifei::spinOnce() {
	amg_bot_1_.spinOnce();
	amg_bot_2_.spinOnce();
	amg_bot_3_.spinOnce();
	p3_dx_.spinOnce();
	robotino_.spinOnce();
	ros::spinOnce();
}
