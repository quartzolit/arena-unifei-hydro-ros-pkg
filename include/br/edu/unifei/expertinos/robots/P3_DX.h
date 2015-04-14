/**
 *  P3_DX.h
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 01/04/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#ifndef P3_DX_H_
#define P3_DX_H_

#include "br/edu/unifei/expertinos/robots/Pioneer.h"

namespace br {

	namespace edu {

		namespace unifei {

			namespace expertinos {

				namespace robots {

					class P3_DX : public Pioneer {

					public:

						P3_DX(ros::NodeHandle nh);
						P3_DX(ros::NodeHandle nh, std::string number);
						~P3_DX();

						static const int NUMBER_OF_DISTANCE_SENSORS = 16;	
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

#endif /* P3_DX_H_ */
