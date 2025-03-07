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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTGATEWAYSERVICEREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_LISTGATEWAYSERVICEREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT ListGatewayServiceRequest : public RpcServiceRequest {
public:
	struct FilterParams {
		std::string gatewayUniqueId;
		std::string name;
		std::string _namespace;
		std::string sourceType;
		std::string groupName;
	};
	ListGatewayServiceRequest();
	~ListGatewayServiceRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getOrderItem() const;
	void setOrderItem(const std::string &orderItem);
	int getPageSize() const;
	void setPageSize(int pageSize);
	bool getDescSort() const;
	void setDescSort(bool descSort);
	FilterParams getFilterParams() const;
	void setFilterParams(const FilterParams &filterParams);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	int pageNumber_;
	std::string orderItem_;
	int pageSize_;
	bool descSort_;
	FilterParams filterParams_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_LISTGATEWAYSERVICEREQUEST_H_
