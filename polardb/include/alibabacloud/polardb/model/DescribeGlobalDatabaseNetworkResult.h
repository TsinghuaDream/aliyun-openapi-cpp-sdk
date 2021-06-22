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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATABASENETWORKRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATABASENETWORKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeGlobalDatabaseNetworkResult : public ServiceResult
			{
			public:
				struct Connection
				{
					std::string port;
					std::string connectionString;
					std::string netType;
				};
				struct DBCluster
				{
					std::string dBClusterStatus;
					std::string dBClusterId;
					std::string dBClusterDescription;
					std::string expired;
					std::string payType;
					std::string dBType;
					std::string replicaLag;
					std::string dBNodeClass;
					std::string storageUsed;
					std::string role;
					std::string dBVersion;
					std::string regionId;
					std::string expireTime;
				};


				DescribeGlobalDatabaseNetworkResult();
				explicit DescribeGlobalDatabaseNetworkResult(const std::string &payload);
				~DescribeGlobalDatabaseNetworkResult();
				std::vector<Connection> getConnections()const;
				std::string getGDNStatus()const;
				std::string getDBVersion()const;
				std::string getGDNId()const;
				std::string getCreateTime()const;
				std::string getDBType()const;
				std::string getGDNDescription()const;
				std::vector<DBCluster> getDBClusters()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Connection> connections_;
				std::string gDNStatus_;
				std::string dBVersion_;
				std::string gDNId_;
				std::string createTime_;
				std::string dBType_;
				std::string gDNDescription_;
				std::vector<DBCluster> dBClusters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATABASENETWORKRESULT_H_