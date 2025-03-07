/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEGADINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEGADINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT CreateGADInstanceRequest : public RpcServiceRequest
			{
			public:
				struct UnitNode
				{
					long dBInstanceStorage;
					std::string zoneIDSlave1;
					std::string zoneIDSlave2;
					std::string engineVersion;
					std::string dbInstanceClass;
					std::string securityIPList;
					std::string vSwitchID;
					std::string regionID;
					std::string engine;
					std::string dtsInstanceClass;
					std::string vpcID;
					std::string zoneID;
					std::string dBInstanceDescription;
					std::string payType;
					std::string dtsConflict;
				};

			public:
				CreateGADInstanceRequest();
				~CreateGADInstanceRequest();

				std::string getDBList()const;
				void setDBList(const std::string& dBList);
				std::string getCentralDBInstanceId()const;
				void setCentralDBInstanceId(const std::string& centralDBInstanceId);
				std::string getCentralRdsDtsAdminPassword()const;
				void setCentralRdsDtsAdminPassword(const std::string& centralRdsDtsAdminPassword);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getCentralRdsDtsAdminAccount()const;
				void setCentralRdsDtsAdminAccount(const std::string& centralRdsDtsAdminAccount);
				std::string getCentralRegionId()const;
				void setCentralRegionId(const std::string& centralRegionId);
				std::vector<UnitNode> getUnitNode()const;
				void setUnitNode(const std::vector<UnitNode>& unitNode);

            private:
				std::string dBList_;
				std::string centralDBInstanceId_;
				std::string centralRdsDtsAdminPassword_;
				std::string description_;
				std::string centralRdsDtsAdminAccount_;
				std::string centralRegionId_;
				std::vector<UnitNode> unitNode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEGADINSTANCEREQUEST_H_