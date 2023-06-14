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

#ifndef ALIBABACLOUD_GA_MODEL_LISTBASICENDPOINTSREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_LISTBASICENDPOINTSREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT ListBasicEndpointsRequest : public RpcServiceRequest {
public:
	ListBasicEndpointsRequest();
	~ListBasicEndpointsRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getEndpointId() const;
	void setEndpointId(const std::string &endpointId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEndpointType() const;
	void setEndpointType(const std::string &endpointType);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getName() const;
	void setName(const std::string &name);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getEndpointGroupId() const;
	void setEndpointGroupId(const std::string &endpointGroupId);

private:
	std::string clientToken_;
	std::string endpointId_;
	std::string regionId_;
	std::string endpointType_;
	std::string nextToken_;
	std::string name_;
	int maxResults_;
	std::string endpointGroupId_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_LISTBASICENDPOINTSREQUEST_H_
