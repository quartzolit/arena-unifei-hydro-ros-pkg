/**
 *  Robotino.h
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 02/04/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#ifndef ROBOTINO_H_
#define ROBOTINO_H_

#include "br/edu/unifei/expertinos/robots/Festo.h"
#include "string.h"
#include <vector>

namespace br {

	namespace edu {

		namespace unifei {

			namespace expertinos {

				namespace robots {

					class Robotino : public Festo {

					public:

						Robotino(ros::NodeHandle nh);
						Robotino(ros::NodeHandle nh, std::string number);
						~Robotino();

						static const int NUMBER_OF_DISTANCE_SENSORS = 9;	
						std::vector<float> DISTANCE_SENSORS_DIRECTION;

						int getNumberOfDistanceSensors() const;
						std::vector<float> getDistanceSensorsDirection() const;
						float getDistanceSensorDirection(int index) const;

					};
			
				}

			}

		}

	}

}

#endif /* ROBOTINO_H_ */
