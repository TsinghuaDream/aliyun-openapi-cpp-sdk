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

#ifndef ALIBABACLOUD_MSE_MODEL_UPGRADECLUSTERREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPGRADECLUSTERREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpgradeClusterRequest : public RpcServiceRequest {
public:
	UpgradeClusterRequest();
	~UpgradeClusterRequest();
	std::string getUpgradeVersion() const;
	void setUpgradeVersion(const std::string &upgradeVersion);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRequestPars() const;
	void setRequestPars(const std::string &requestPars);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	std::string upgradeVersion_;
	std::string instanceId_;
	std::string requestPars_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPGRADECLUSTERREQUEST_H_
