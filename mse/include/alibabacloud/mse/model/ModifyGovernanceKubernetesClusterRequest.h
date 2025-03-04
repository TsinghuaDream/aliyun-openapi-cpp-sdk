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

#ifndef ALIBABACLOUD_MSE_MODEL_MODIFYGOVERNANCEKUBERNETESCLUSTERREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_MODIFYGOVERNANCEKUBERNETESCLUSTERREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT ModifyGovernanceKubernetesClusterRequest : public RpcServiceRequest {
public:
	ModifyGovernanceKubernetesClusterRequest();
	~ModifyGovernanceKubernetesClusterRequest();
	std::string getNamespaceInfos() const;
	void setNamespaceInfos(const std::string &namespaceInfos);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	std::string namespaceInfos_;
	std::string clusterId_;
	std::string regionId_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_MODIFYGOVERNANCEKUBERNETESCLUSTERREQUEST_H_
