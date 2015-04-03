/**
 *  ArenaUnifei.h
 *
 *  Version: 1.0.0.0
 *  Created on: 17/03/2015
 *  Modified on: 17/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#ifndef LRO_H_
#define LRO_H_

#include "br/edu/unifei/expertinos/robots/AmigoBot.h"
#include "br/edu/unifei/expertinos/robots/P3_DX.h"
#include "br/edu/unifei/expertinos/robots/Robotino.h"

namespace br {

	namespace edu {

		namespace unifei {

			namespace expertinos {

				namespace arena {

					class LRO {

					public:

						LRO();
						~LRO();

						void spin();
						void spinOnce();

					private:

						ros::NodeHandle nh_;

						robots::AmigoBot amg_bot_1_;
						robots::AmigoBot amg_bot_2_;
						robots::AmigoBot amg_bot_3_;
						robots::P3_DX p3_dx_;
						robots::Robotino robotino_;

						void readParameters();	

					};
			
				}

			}

		}

	}

}

#endif /* LRO_H_ */
