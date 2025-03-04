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

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYROUTECORSREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYROUTECORSREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdateGatewayRouteCORSRequest : public RpcServiceRequest {
public:
	struct CorsJSON {
		bool allowCredentials;
		std::string allowOrigins;
		std::string allowMethods;
		std::string allowHeaders;
		std::string exposeHeaders;
		std::string timeUnit;
		long unitNum;
		std::string status;
	};
	UpdateGatewayRouteCORSRequest();
	~UpdateGatewayRouteCORSRequest();
	CorsJSON getCorsJSON() const;
	void setCorsJSON(const CorsJSON &corsJSON);
	std::string getGatewayUniqueId() const;
	void setGatewayUniqueId(const std::string &gatewayUniqueId);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	long getId() const;
	void setId(long id);
	long getGatewayId() const;
	void setGatewayId(long gatewayId);

private:
	CorsJSON corsJSON_;
	std::string gatewayUniqueId_;
	std::string acceptLanguage_;
	long id_;
	long gatewayId_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYROUTECORSREQUEST_H_
