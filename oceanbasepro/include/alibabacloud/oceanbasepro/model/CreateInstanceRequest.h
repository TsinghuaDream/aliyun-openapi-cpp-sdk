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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEINSTANCEREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEINSTANCEREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT CreateInstanceRequest : public RpcServiceRequest {
public:
	CreateInstanceRequest();
	~CreateInstanceRequest();
	std::string getInstanceClass() const;
	void setInstanceClass(const std::string &instanceClass);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	long getAutoRenewPeriod() const;
	void setAutoRenewPeriod(long autoRenewPeriod);
	long getPeriod() const;
	void setPeriod(long period);
	long getDiskSize() const;
	void setDiskSize(long diskSize);
	std::string getZones() const;
	void setZones(const std::string &zones);
	std::string getDiskType() const;
	void setDiskType(const std::string &diskType);
	std::string getObVersion() const;
	void setObVersion(const std::string &obVersion);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getSeries() const;
	void setSeries(const std::string &series);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	std::string getBid() const;
	void setBid(const std::string &bid);

private:
	std::string instanceClass_;
	std::string resourceGroupId_;
	long autoRenewPeriod_;
	long period_;
	long diskSize_;
	std::string zones_;
	std::string diskType_;
	std::string obVersion_;
	std::string periodUnit_;
	std::string instanceName_;
	bool autoRenew_;
	std::string series_;
	std::string chargeType_;
	std::string bid_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEINSTANCEREQUEST_H_
