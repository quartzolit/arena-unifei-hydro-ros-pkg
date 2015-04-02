/**
 *  AmigoBot.h
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 16/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#ifndef AMIGOBOT_H_
#define AMIGOBOT_H_

#include "Pioneer.h"

class AmigoBot : public Pioneer {

public:

	AmigoBot(ros::NodeHandle nh, std::string number);
	~AmigoBot();

	static const int NUMBER_OF_DISTANCE_SENSORS = 8;
	
	int getNumberOfDistanceSensors() const;

};

#endif /* AMIGOBOT_H_ */
