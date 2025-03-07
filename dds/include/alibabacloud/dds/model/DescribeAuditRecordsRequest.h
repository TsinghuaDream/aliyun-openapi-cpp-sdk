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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEAUDITRECORDSREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEAUDITRECORDSREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT DescribeAuditRecordsRequest : public RpcServiceRequest {
public:
	DescribeAuditRecordsRequest();
	~DescribeAuditRecordsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getQueryKeywords() const;
	void setQueryKeywords(const std::string &queryKeywords);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDatabase() const;
	void setDatabase(const std::string &database);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getNodeId() const;
	void setNodeId(const std::string &nodeId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getForm() const;
	void setForm(const std::string &form);
	std::string getUser() const;
	void setUser(const std::string &user);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	long resourceOwnerId_;
	std::string startTime_;
	std::string queryKeywords_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string database_;
	std::string securityToken_;
	int pageSize_;
	std::string dBInstanceId_;
	std::string nodeId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string endTime_;
	long ownerId_;
	std::string form_;
	std::string user_;
	std::string orderType_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEAUDITRECORDSREQUEST_H_
