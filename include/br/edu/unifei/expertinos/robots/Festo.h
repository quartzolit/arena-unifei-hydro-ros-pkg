/**
 *  Festo.h
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 02/04/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#ifndef FESTO_H_
#define FESTO_H_

#include <vector>
#include <sensor_msgs/PointCloud.h>
#include "br/edu/unifei/expertinos/robots/Robot.h"

namespace br {

	namespace edu {

		namespace unifei {

			namespace expertinos {

				namespace robots {

					class Festo : public Robot {

					public:

						Festo(ros::NodeHandle nh, std::string name, std::string ns, bool holonomic = false);
						~Festo();	

						std::vector<geometry_msgs::Point32> getDistanceSensorsValue() const;
						geometry_msgs::Point32 getDistanceSensorValue(int index) const;

						virtual int getNumberOfDistanceSensors() const = 0;
						virtual std::vector<float> getDistanceSensorsDirection() const = 0;
						virtual float getDistanceSensorDirection(int index) const = 0;

					private:

						ros::Subscriber dist_sub_;

						std::vector<geometry_msgs::Point32> dist_values_;

						void distanceSensorsCallback(const sensor_msgs::PointCloudConstPtr& msg);

					};
			
				}

			}

		}

	}

}

#endif /* FESTO_H_ */
