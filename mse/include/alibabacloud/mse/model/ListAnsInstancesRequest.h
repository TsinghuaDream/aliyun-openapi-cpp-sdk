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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTANSINSTANCESREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_LISTANSINSTANCESREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT ListAnsInstancesRequest : public RpcServiceRequest {
public:
	ListAnsInstancesRequest();
	~ListAnsInstancesRequest();
	std::string getClusterName() const;
	void setClusterName(const std::string &clusterName);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getGroupName() const;
	void setGroupName(const std::string &groupName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	std::string getRequestPars() const;
	void setRequestPars(const std::string &requestPars);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);

private:
	std::string clusterName_;
	std::string clusterId_;
	int pageNum_;
	std::string groupName_;
	std::string instanceId_;
	std::string namespaceId_;
	std::string requestPars_;
	int pageSize_;
	std::string acceptLanguage_;
	std::string serviceName_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_LISTANSINSTANCESREQUEST_H_
