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

#ifndef ALIBABACLOUD_SELECTDB_MODEL_ALLOCATEINSTANCEPUBLICCONNECTIONREQUEST_H_
#define ALIBABACLOUD_SELECTDB_MODEL_ALLOCATEINSTANCEPUBLICCONNECTIONREQUEST_H_

#include <alibabacloud/selectdb/SelectdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Selectdb {
namespace Model {
class ALIBABACLOUD_SELECTDB_EXPORT AllocateInstancePublicConnectionRequest : public RpcServiceRequest {
public:
	AllocateInstancePublicConnectionRequest();
	~AllocateInstancePublicConnectionRequest();
	std::string getConnectionStringPrefix() const;
	void setConnectionStringPrefix(const std::string &connectionStringPrefix);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNetType() const;
	void setNetType(const std::string &netType);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);

private:
	std::string connectionStringPrefix_;
	long resourceOwnerId_;
	std::string regionId_;
	std::string netType_;
	std::string dBInstanceId_;
};
} // namespace Model
} // namespace Selectdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SELECTDB_MODEL_ALLOCATEINSTANCEPUBLICCONNECTIONREQUEST_H_
