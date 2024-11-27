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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEENSROUTETABLESREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEENSROUTETABLESREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeEnsRouteTablesRequest : public RpcServiceRequest {
public:
	DescribeEnsRouteTablesRequest();
	~DescribeEnsRouteTablesRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getRouteTableId() const;
	void setRouteTableId(const std::string &routeTableId);
	std::string getNetworkId() const;
	void setNetworkId(const std::string &networkId);

private:
	int pageNumber_;
	int pageSize_;
	std::string ensRegionId_;
	std::string routeTableId_;
	std::string networkId_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEENSROUTETABLESREQUEST_H_
