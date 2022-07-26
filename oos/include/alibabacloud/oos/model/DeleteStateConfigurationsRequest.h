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

#ifndef ALIBABACLOUD_OOS_MODEL_DELETESTATECONFIGURATIONSREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_DELETESTATECONFIGURATIONSREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT DeleteStateConfigurationsRequest : public RpcServiceRequest {
public:
	DeleteStateConfigurationsRequest();
	~DeleteStateConfigurationsRequest();
	std::string getStateConfigurationIds() const;
	void setStateConfigurationIds(const std::string &stateConfigurationIds);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string stateConfigurationIds_;
	std::string clientToken_;
	std::string regionId_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_DELETESTATECONFIGURATIONSREQUEST_H_
