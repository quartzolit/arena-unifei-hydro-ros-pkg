/**
 *  ArenaUnifei.h
 *
 *  Version: 1.0.0.0
 *  Created on: 17/03/2015
 *  Modified on: 17/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#ifndef ARENA_UNIFEI_H_
#define ARENA_UNIFEI_H_

#include "AmigoBot.h"
#include "P3_DX.h"
#include "Robotino.h"

class ArenaUnifei {

public:

	ArenaUnifei(ros::NodeHandle nh);
	~ArenaUnifei();

	void spin();

private:

	ros::NodeHandle nh_;

	AmigoBot amg_bot_1_;
	AmigoBot amg_bot_2_;
	AmigoBot amg_bot_3_;
	P3_DX p3_dx_;
	Robotino robotino_;

	void readParameters();	

};

#endif /* ARENA_UNIFEI_H_ */
