/**
 *  Pioneer.h
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 02/04/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#ifndef PIONEER_H_
#define PIONEER_H_

#include <sensor_msgs/PointCloud.h>
#include "br/edu/unifei/expertinos/robots/Robot.h"

namespace br {

	namespace edu {

		namespace unifei {

			namespace expertinos {

				namespace robots {

					class Pioneer : public Robot {

					public:

						Pioneer(ros::NodeHandle nh, std::string name, std::string ns, bool holonomic = false);
						~Pioneer();

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

#endif /* PIONEER_H_ */
