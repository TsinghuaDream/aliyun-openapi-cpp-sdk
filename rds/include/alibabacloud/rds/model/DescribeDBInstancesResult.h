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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeDBInstancesResult : public ServiceResult
			{
			public:
				struct DBInstance
				{
					struct ReadOnlyDBInstanceId
					{
						std::string dBInstanceId;
					};
					std::string resourceGroupId;
					std::string destroyTime;
					std::string dedicatedHostNameForMaster;
					std::string dBInstanceType;
					std::string dedicatedHostZoneIdForMaster;
					bool mutriORsignle;
					std::string instanceNetworkType;
					std::string generalGroupName;
					std::string replicateId;
					std::string dedicatedHostIdForLog;
					std::string autoUpgradeMinorVersion;
					std::string dBInstanceId;
					std::string lockReason;
					std::string dBInstanceDescription;
					std::string engine;
					std::string engineVersion;
					std::string dBInstanceStatus;
					std::string dBInstanceClass;
					std::string vSwitchId;
					std::string dedicatedHostGroupName;
					int tipsLevel;
					std::string payType;
					std::string guardDBInstanceId;
					std::string lockMode;
					int switchWeight;
					int insId;
					std::string dedicatedHostIdForSlave;
					std::string vpcId;
					std::string masterInstanceId;
					std::string connectionMode;
					std::string dedicatedHostZoneIdForLog;
					std::string vpcCloudInstanceId;
					std::string connectionString;
					std::string expireTime;
					std::string dedicatedHostIdForMaster;
					std::string dedicatedHostZoneIdForSlave;
					std::string dedicatedHostNameForLog;
					std::string category;
					std::string dBInstanceNetType;
					std::string dedicatedHostGroupId;
					std::string tempDBInstanceId;
					std::vector<DBInstance::ReadOnlyDBInstanceId> readOnlyDBInstanceIds;
					std::string dedicatedHostNameForSlave;
					std::string zoneId;
					std::string createTime;
					std::string dBInstanceStorageType;
					std::string vpcName;
					std::string regionId;
					std::string tips;
				};


				DescribeDBInstancesResult();
				explicit DescribeDBInstancesResult(const std::string &payload);
				~DescribeDBInstancesResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				std::string getNextToken()const;
				int getPageNumber()const;
				std::vector<DBInstance> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				std::string nextToken_;
				int pageNumber_;
				std::vector<DBInstance> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESRESULT_H_