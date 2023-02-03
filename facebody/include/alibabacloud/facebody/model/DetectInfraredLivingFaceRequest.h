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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_DETECTINFRAREDLIVINGFACEREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_DETECTINFRAREDLIVINGFACEREQUEST_H_

#include <alibabacloud/facebody/FacebodyExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Facebody {
namespace Model {
class ALIBABACLOUD_FACEBODY_EXPORT DetectInfraredLivingFaceRequest : public RpcServiceRequest {
public:
	struct Tasks {
		std::string imageURL;
	};
	DetectInfraredLivingFaceRequest();
	~DetectInfraredLivingFaceRequest();
	bool getFormatResultToJson() const;
	void setFormatResultToJson(bool formatResultToJson);
	std::string getOssFile() const;
	void setOssFile(const std::string &ossFile);
	std::vector<Tasks> getTasks() const;
	void setTasks(const std::vector<Tasks> &tasks);
	std::string getRequestProxyBy() const;
	void setRequestProxyBy(const std::string &requestProxyBy);

private:
	bool formatResultToJson_;
	std::string ossFile_;
	std::vector<Tasks> tasks_;
	std::string requestProxyBy_;
};
} // namespace Model
} // namespace Facebody
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FACEBODY_MODEL_DETECTINFRAREDLIVINGFACEREQUEST_H_
