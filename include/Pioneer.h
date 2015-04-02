/**
 *  Pioneer.h
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 16/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#ifndef PIONEER_H_
#define PIONEER_H_

#include "Robot.h"

class Pioneer : public Robot {

public:

	Pioneer(ros::NodeHandle nh, std::string name, std::string ns, bool holonomic = false);
	~Pioneer();

	virtual int getNumberOfDistanceSensors() const = 0;

protected:

	std::string getDistanceSensorsTopicName() const;

};

#endif /* PIONEER_H_ */
