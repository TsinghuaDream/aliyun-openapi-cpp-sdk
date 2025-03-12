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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESAVINGSPLANPRICEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESAVINGSPLANPRICEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeSavingsPlanPriceRequest : public RpcServiceRequest {
public:
	DescribeSavingsPlanPriceRequest();
	~DescribeSavingsPlanPriceRequest();
	std::string getInstanceTypeFamilyGroup() const;
	void setInstanceTypeFamilyGroup(const std::string &instanceTypeFamilyGroup);
	int getPeriod() const;
	void setPeriod(int period);
	std::vector<std::string> getResourceId() const;
	void setResourceId(const std::vector<std::string> &resourceId);
	std::string getInstanceTypeFamily() const;
	void setInstanceTypeFamily(const std::string &instanceTypeFamily);
	std::string getPlanType() const;
	void setPlanType(const std::string &planType);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getOfferingType() const;
	void setOfferingType(const std::string &offeringType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getCommittedAmount() const;
	void setCommittedAmount(const std::string &committedAmount);

private:
	std::string instanceTypeFamilyGroup_;
	int period_;
	std::vector<std::string> resourceId_;
	std::string instanceTypeFamily_;
	std::string planType_;
	std::string periodUnit_;
	std::string offeringType_;
	std::string regionId_;
	std::string committedAmount_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESAVINGSPLANPRICEREQUEST_H_
