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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCEENDPOINTREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCEENDPOINTREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyDBInstanceEndpointRequest : public RpcServiceRequest {
public:
	ModifyDBInstanceEndpointRequest();
	~ModifyDBInstanceEndpointRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getDBInstanceEndpointDescription() const;
	void setDBInstanceEndpointDescription(const std::string &dBInstanceEndpointDescription);
	std::string getNodeItems() const;
	void setNodeItems(const std::string &nodeItems);
	std::string getDBInstanceEndpointId() const;
	void setDBInstanceEndpointId(const std::string &dBInstanceEndpointId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string dBInstanceEndpointDescription_;
	std::string nodeItems_;
	std::string dBInstanceEndpointId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCEENDPOINTREQUEST_H_
