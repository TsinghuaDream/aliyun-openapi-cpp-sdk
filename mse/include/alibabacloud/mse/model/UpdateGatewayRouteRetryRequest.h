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

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYROUTERETRYREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYROUTERETRYREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdateGatewayRouteRetryRequest : public RpcServiceRequest {
public:
	struct RetryJSON {
		std::string string;
		std::vector<std::string> httpCodes;
		int attempts;
		std::string string;
		std::vector<std::string> retryOn;
		std::string status;
	};
	UpdateGatewayRouteRetryRequest();
	~UpdateGatewayRouteRetryRequest();
	std::string getGatewayUniqueId() const;
	void setGatewayUniqueId(const std::string &gatewayUniqueId);
	RetryJSON getRetryJSON() const;
	void setRetryJSON(const RetryJSON &retryJSON);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	long getId() const;
	void setId(long id);
	long getGatewayId() const;
	void setGatewayId(long gatewayId);

private:
	std::string gatewayUniqueId_;
	RetryJSON retryJSON_;
	std::string acceptLanguage_;
	long id_;
	long gatewayId_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYROUTERETRYREQUEST_H_
