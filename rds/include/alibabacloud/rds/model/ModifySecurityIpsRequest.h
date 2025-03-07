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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYSECURITYIPSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYSECURITYIPSREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT ModifySecurityIpsRequest : public RpcServiceRequest
			{

			public:
				ModifySecurityIpsRequest();
				~ModifySecurityIpsRequest();

				std::string getDBInstanceIPArrayName()const;
				void setDBInstanceIPArrayName(const std::string& dBInstanceIPArrayName);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getSecurityIps()const;
				void setSecurityIps(const std::string& securityIps);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getWhitelistNetworkType()const;
				void setWhitelistNetworkType(const std::string& whitelistNetworkType);
				std::string getSecurityIPType()const;
				void setSecurityIPType(const std::string& securityIPType);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getModifyMode()const;
				void setModifyMode(const std::string& modifyMode);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getFreshWhiteListReadins()const;
				void setFreshWhiteListReadins(const std::string& freshWhiteListReadins);
				std::string getDBInstanceIPArrayAttribute()const;
				void setDBInstanceIPArrayAttribute(const std::string& dBInstanceIPArrayAttribute);

            private:
				std::string dBInstanceIPArrayName_;
				long resourceOwnerId_;
				std::string clientToken_;
				std::string securityIps_;
				std::string securityGroupId_;
				std::string accessKeyId_;
				std::string whitelistNetworkType_;
				std::string securityIPType_;
				std::string dBInstanceId_;
				std::string modifyMode_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string freshWhiteListReadins_;
				std::string dBInstanceIPArrayAttribute_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYSECURITYIPSREQUEST_H_