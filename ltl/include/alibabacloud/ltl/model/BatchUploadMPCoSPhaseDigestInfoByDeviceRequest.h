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

#ifndef ALIBABACLOUD_LTL_MODEL_BATCHUPLOADMPCOSPHASEDIGESTINFOBYDEVICEREQUEST_H_
#define ALIBABACLOUD_LTL_MODEL_BATCHUPLOADMPCOSPHASEDIGESTINFOBYDEVICEREQUEST_H_

#include <alibabacloud/ltl/LtlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ltl {
namespace Model {
class ALIBABACLOUD_LTL_EXPORT BatchUploadMPCoSPhaseDigestInfoByDeviceRequest : public RpcServiceRequest {
public:
	BatchUploadMPCoSPhaseDigestInfoByDeviceRequest();
	~BatchUploadMPCoSPhaseDigestInfoByDeviceRequest();
	std::string getIotSignature() const;
	void setIotSignature(const std::string &iotSignature);
	std::string getIotAuthType() const;
	void setIotAuthType(const std::string &iotAuthType);
	std::string getIotIdSource() const;
	void setIotIdSource(const std::string &iotIdSource);
	std::string getPhaseId() const;
	void setPhaseId(const std::string &phaseId);
	std::string getApiVersion() const;
	void setApiVersion(const std::string &apiVersion);
	std::string getBizChainId() const;
	void setBizChainId(const std::string &bizChainId);
	std::map<std::string, std::string> getPhaseDataList() const;
	void setPhaseDataList(std::map<std::string, std::string> phaseDataList);
	std::string getIotId() const;
	void setIotId(const std::string &iotId);
	std::string getPhaseGroupId() const;
	void setPhaseGroupId(const std::string &phaseGroupId);
	std::string getIotDataDigest() const;
	void setIotDataDigest(const std::string &iotDataDigest);
	std::string getIotIdServiceProvider() const;
	void setIotIdServiceProvider(const std::string &iotIdServiceProvider);

private:
	std::string iotSignature_;
	std::string iotAuthType_;
	std::string iotIdSource_;
	std::string phaseId_;
	std::string apiVersion_;
	std::string bizChainId_;
	std::map<std::string, std::string> phaseDataList_;
	std::string iotId_;
	std::string phaseGroupId_;
	std::string iotDataDigest_;
	std::string iotIdServiceProvider_;
};
} // namespace Model
} // namespace Ltl
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LTL_MODEL_BATCHUPLOADMPCOSPHASEDIGESTINFOBYDEVICEREQUEST_H_
