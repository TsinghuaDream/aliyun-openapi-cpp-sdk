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

#ifndef ALIBABACLOUD_CSAS_MODEL_CREATEWMBASEIMAGEREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_CREATEWMBASEIMAGEREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT CreateWmBaseImageRequest : public RpcServiceRequest {
public:
	CreateWmBaseImageRequest();
	~CreateWmBaseImageRequest();
	int getScale() const;
	void setScale(int scale);
	std::string getApiType() const;
	void setApiType(const std::string &apiType);
	std::string getWmInfoUint() const;
	void setWmInfoUint(const std::string &wmInfoUint);
	long getWmInfoSize() const;
	void setWmInfoSize(long wmInfoSize);
	std::string getWmInfoBytesB64() const;
	void setWmInfoBytesB64(const std::string &wmInfoBytesB64);
	std::string getWmType() const;
	void setWmType(const std::string &wmType);
	int getWidth() const;
	void setWidth(int width);
	int getOpacity() const;
	void setOpacity(int opacity);
	int getHeight() const;
	void setHeight(int height);

private:
	int scale_;
	std::string apiType_;
	std::string wmInfoUint_;
	long wmInfoSize_;
	std::string wmInfoBytesB64_;
	std::string wmType_;
	int width_;
	int opacity_;
	int height_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_CREATEWMBASEIMAGEREQUEST_H_
