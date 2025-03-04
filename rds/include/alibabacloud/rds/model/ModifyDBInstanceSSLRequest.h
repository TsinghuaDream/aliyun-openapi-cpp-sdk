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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCESSLREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCESSLREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT ModifyDBInstanceSSLRequest : public RpcServiceRequest
			{

			public:
				ModifyDBInstanceSSLRequest();
				~ModifyDBInstanceSSLRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getConnectionString()const;
				void setConnectionString(const std::string& connectionString);
				std::string getServerKey()const;
				void setServerKey(const std::string& serverKey);
				int getClientCrlEnabled()const;
				void setClientCrlEnabled(int clientCrlEnabled);
				std::string getACL()const;
				void setACL(const std::string& aCL);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getClientCertRevocationList()const;
				void setClientCertRevocationList(const std::string& clientCertRevocationList);
				std::string getServerCert()const;
				void setServerCert(const std::string& serverCert);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				int getClientCAEnabled()const;
				void setClientCAEnabled(int clientCAEnabled);
				std::string getClientCACert()const;
				void setClientCACert(const std::string& clientCACert);
				std::string getReplicationACL()const;
				void setReplicationACL(const std::string& replicationACL);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getCAType()const;
				void setCAType(const std::string& cAType);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getSSLEnabled()const;
				void setSSLEnabled(int sSLEnabled);

            private:
				long resourceOwnerId_;
				std::string connectionString_;
				std::string serverKey_;
				int clientCrlEnabled_;
				std::string aCL_;
				std::string accessKeyId_;
				std::string clientCertRevocationList_;
				std::string serverCert_;
				std::string dBInstanceId_;
				int clientCAEnabled_;
				std::string clientCACert_;
				std::string replicationACL_;
				std::string resourceOwnerAccount_;
				std::string cAType_;
				std::string ownerAccount_;
				long ownerId_;
				int sSLEnabled_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCESSLREQUEST_H_