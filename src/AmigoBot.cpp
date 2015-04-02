/**
 *  AmigoBot.cpp
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 16/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#include <AmigoBot.h>

/**
 *
 */
AmigoBot::AmigoBot(ros::NodeHandle nh, std::string number) : Pioneer(nh, "amg_bot_" + number + "_", "amigobot/" + number + "/", false) {
	
}

/**
 *
 */
AmigoBot::~AmigoBot() {
	
}

/**
 *
 */
int AmigoBot::getNumberOfDistanceSensors() const {
	return AmigoBot::NUMBER_OF_DISTANCE_SENSORS;
}
