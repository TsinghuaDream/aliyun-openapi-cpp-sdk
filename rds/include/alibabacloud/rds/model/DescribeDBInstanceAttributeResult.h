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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeDBInstanceAttributeResult : public ServiceResult
			{
			public:
				struct DBInstanceAttribute
				{
					struct Extra
					{
						std::string replicaGroupStatus;
						std::string activeReplicaDBInstanceID;
						std::string replicaGroupID;
						std::vector<std::string> dBInstanceIds;
						std::string recoveryModel;
					};
					struct ServerlessConfig
					{
						bool switchForce;
						double scaleMin;
						double scaleMax;
						bool autoPause;
					};
					struct BabelfishConfig
					{
						std::string babelfishEnabled;
						std::string migrationMode;
					};
					struct SlaveZone
					{
						std::string zoneId;
					};
					struct ReadOnlyDBInstanceId
					{
						std::string dBInstanceId;
					};
					struct DBClusterNode
					{
						std::string status;
						std::string nodeZoneId;
						std::string nodeRole;
						std::string classCode;
						std::string memory;
						std::string nodeId;
						std::string cpu;
						std::string classType;
						std::string nodeRegionId;
					};
					long dBInstanceMemory;
					std::string resourceGroupId;
					std::string incrementSourceDBInstanceId;
					std::string masterZone;
					std::string port;
					std::string latestKernelVersion;
					std::string consoleVersion;
					std::string dBInstanceType;
					std::string instanceNetworkType;
					std::string generalGroupName;
					std::string dBInstanceClassType;
					std::string replicateId;
					std::string tempUpgradeRecoveryMaxIOPS;
					std::string autoUpgradeMinorVersion;
					std::string dBInstanceId;
					int dBInstanceStorage;
					std::string pGBouncerEnabled;
					std::string instructionSetArch;
					std::string lockReason;
					std::string availabilityValue;
					std::string dBInstanceDescription;
					std::string tempUpgradeRecoveryClass;
					std::string engine;
					std::string ioAccelerationEnabled;
					std::string iPType;
					int maxIOMBPS;
					std::string engineVersion;
					std::string dBInstanceDiskUsed;
					int maxConnections;
					std::string dBInstanceStatus;
					std::string dBInstanceClass;
					int accountMaxQuantity;
					std::string vSwitchId;
					int tipsLevel;
					std::vector<DBInstanceAttribute::DBClusterNode> dBClusterNodes;
					std::string payType;
					std::string guardDBInstanceId;
					std::string lockMode;
					bool deletionProtection;
					std::string supportCreateSuperAccount;
					int insId;
					std::string timeZone;
					std::string vpcId;
					std::string masterInstanceId;
					std::string currentKernelVersion;
					std::string tempUpgradeTimeStart;
					std::string tempUpgradeTimeEnd;
					std::string creationTime;
					std::string readDelayTime;
					std::string connectionMode;
					std::string vpcCloudInstanceId;
					std::string readonlyInstanceSQLDelayedTime;
					int proxyType;
					std::string connectionString;
					std::string expireTime;
					std::string advancedFeatures;
					int dBMaxQuantity;
					std::string category;
					std::string superPermissionMode;
					std::string dBInstanceNetType;
					std::string dedicatedHostGroupId;
					int tempUpgradeRecoveryCpu;
					std::string tempDBInstanceId;
					std::string dBInstanceCPU;
					int tempUpgradeRecoveryMemory;
					std::string tempUpgradeRecoveryMaxConnections;
					std::string originConfiguration;
					std::string securityIPList;
					std::string guardDBInstanceName;
					std::vector<DBInstanceAttribute::ReadOnlyDBInstanceId> readOnlyDBInstanceIds;
					std::string securityIPMode;
					std::string maintainTime;
					std::string dispenseMode;
					bool burstingEnabled;
					bool coldDataEnabled;
					std::string zoneId;
					std::string tempUpgradeRecoveryTime;
					std::string dBInstanceStorageType;
					std::string collation;
					std::string accountType;
					int maxIOPS;
					std::vector<DBInstanceAttribute::SlaveZone> slaveZones;
					std::string supportUpgradeAccountType;
					Extra extra;
					std::string bpeEnabled;
					bool multipleTempUpgrade;
					ServerlessConfig serverlessConfig;
					BabelfishConfig babelfishConfig;
					bool canTempUpgrade;
					std::string regionId;
					std::string kindCode;
					std::string tips;
				};


				DescribeDBInstanceAttributeResult();
				explicit DescribeDBInstanceAttributeResult(const std::string &payload);
				~DescribeDBInstanceAttributeResult();
				std::vector<DBInstanceAttribute> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBInstanceAttribute> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_