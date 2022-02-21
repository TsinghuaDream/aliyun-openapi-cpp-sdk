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

#ifndef ALIBABACLOUD_MSE_MODEL_GETSERVICELISTREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_GETSERVICELISTREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT GetServiceListRequest : public RpcServiceRequest {
public:
	GetServiceListRequest();
	~GetServiceListRequest();
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);
	std::string getIp() const;
	void setIp(const std::string &ip);
	std::string getServiceType() const;
	void setServiceType(const std::string &serviceType);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::string serviceName_;
	std::string ip_;
	std::string serviceType_;
	std::string appId_;
	std::string acceptLanguage_;
	std::string region_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_GETSERVICELISTREQUEST_H_
