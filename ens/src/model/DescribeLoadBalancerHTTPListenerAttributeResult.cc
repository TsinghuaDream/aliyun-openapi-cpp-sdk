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

#include <alibabacloud/ens/model/DescribeLoadBalancerHTTPListenerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeLoadBalancerHTTPListenerAttributeResult::DescribeLoadBalancerHTTPListenerAttributeResult() :
	ServiceResult()
{}

DescribeLoadBalancerHTTPListenerAttributeResult::DescribeLoadBalancerHTTPListenerAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancerHTTPListenerAttributeResult::~DescribeLoadBalancerHTTPListenerAttributeResult()
{}

void DescribeLoadBalancerHTTPListenerAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ListenerPort"].isNull())
		listenerPort_ = std::stoi(value["ListenerPort"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["Scheduler"].isNull())
		scheduler_ = value["Scheduler"].asString();
	if(!value["StickySession"].isNull())
		stickySession_ = value["StickySession"].asString();
	if(!value["StickySessionType"].isNull())
		stickySessionType_ = value["StickySessionType"].asString();
	if(!value["CookieTimeout"].isNull())
		cookieTimeout_ = std::stoi(value["CookieTimeout"].asString());
	if(!value["Cookie"].isNull())
		cookie_ = value["Cookie"].asString();
	if(!value["HealthCheck"].isNull())
		healthCheck_ = value["HealthCheck"].asString();
	if(!value["HealthyThreshold"].isNull())
		healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	if(!value["UnhealthyThreshold"].isNull())
		unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	if(!value["HealthCheckTimeout"].isNull())
		healthCheckTimeout_ = std::stoi(value["HealthCheckTimeout"].asString());
	if(!value["HealthCheckConnectPort"].isNull())
		healthCheckConnectPort_ = std::stoi(value["HealthCheckConnectPort"].asString());
	if(!value["HealthCheckInterval"].isNull())
		healthCheckInterval_ = std::stoi(value["HealthCheckInterval"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["ListenerForward"].isNull())
		listenerForward_ = value["ListenerForward"].asString();
	if(!value["ForwardPort"].isNull())
		forwardPort_ = std::stoi(value["ForwardPort"].asString());
	if(!value["RequestTimeout"].isNull())
		requestTimeout_ = std::stoi(value["RequestTimeout"].asString());
	if(!value["IdleTimeout"].isNull())
		idleTimeout_ = std::stoi(value["IdleTimeout"].asString());
	if(!value["HealthCheckHttpCode"].isNull())
		healthCheckHttpCode_ = value["HealthCheckHttpCode"].asString();
	if(!value["HealthCheckDomain"].isNull())
		healthCheckDomain_ = value["HealthCheckDomain"].asString();
	if(!value["HealthCheckURI"].isNull())
		healthCheckURI_ = value["HealthCheckURI"].asString();
	if(!value["ServerCertificateId"].isNull())
		serverCertificateId_ = value["ServerCertificateId"].asString();
	if(!value["HealthCheckMethod"].isNull())
		healthCheckMethod_ = value["HealthCheckMethod"].asString();
	if(!value["XForwardedFor"].isNull())
		xForwardedFor_ = value["XForwardedFor"].asString();
	if(!value["BackendServerPort"].isNull())
		backendServerPort_ = std::stoi(value["BackendServerPort"].asString());

}

int DescribeLoadBalancerHTTPListenerAttributeResult::getCookieTimeout()const
{
	return cookieTimeout_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getDescription()const
{
	return description_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getScheduler()const
{
	return scheduler_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckURI()const
{
	return healthCheckURI_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheck()const
{
	return healthCheck_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getIdleTimeout()const
{
	return idleTimeout_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getBackendServerPort()const
{
	return backendServerPort_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckMethod()const
{
	return healthCheckMethod_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getServerCertificateId()const
{
	return serverCertificateId_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getStickySessionType()const
{
	return stickySessionType_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getCookie()const
{
	return cookie_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getRequestTimeout()const
{
	return requestTimeout_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getListenerForward()const
{
	return listenerForward_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getStickySession()const
{
	return stickySession_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getForwardPort()const
{
	return forwardPort_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor()const
{
	return xForwardedFor_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

