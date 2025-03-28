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

#ifndef ALIBABACLOUD_LIVE_MODEL_LIVEUPSTREAMQOSDATAREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_LIVEUPSTREAMQOSDATAREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT LiveUpstreamQosDataRequest : public RpcServiceRequest {
public:
	LiveUpstreamQosDataRequest();
	~LiveUpstreamQosDataRequest();
	std::string getCdnDomains() const;
	void setCdnDomains(const std::string &cdnDomains);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getCdnProvinces() const;
	void setCdnProvinces(const std::string &cdnProvinces);
	std::string getKwaiSidcs() const;
	void setKwaiSidcs(const std::string &kwaiSidcs);
	std::vector<int> getKwaiTsc() const;
	void setKwaiTsc(const std::vector<int> &kwaiTsc);
	std::string getUpstreamDomains() const;
	void setUpstreamDomains(const std::string &upstreamDomains);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getCdnIsps() const;
	void setCdnIsps(const std::string &cdnIsps);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::string cdnDomains_;
	std::string startTime_;
	std::string cdnProvinces_;
	std::string kwaiSidcs_;
	std::vector<int> kwaiTsc_;
	std::string upstreamDomains_;
	std::string endTime_;
	long ownerId_;
	std::string cdnIsps_;
	std::string region_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_LIVEUPSTREAMQOSDATAREQUEST_H_
