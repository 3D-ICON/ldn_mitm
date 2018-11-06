/*
 * Copyright (c) 2018 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#pragma once
#include <switch.h>
#include <stratosphere.hpp>
#include "debug.hpp"

enum class CommState {
    None,
    Initialized,
    AccessPoint,
    AccessPointCreated,
    Station,
    StationConnected,
    Error
};

class ICommunicationInterface : public IServiceObject {
    private:
        CommState state;
    public:
        ICommunicationInterface(): state(CommState::None) {
            LogStr("ICommunicationInterface\n");
            /* ... */
        };
        
        ~ICommunicationInterface() {
            LogStr("~ICommunicationInterface\n");
            /* ... */
        };
    private:
    public:
        DEFINE_SERVICE_DISPATCH_TABLE {
        };
};
