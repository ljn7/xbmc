/*
 *  Copyright (C) 2016-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

namespace PVR
{
class CPVRGUIActionsDatabase
{
public:
  CPVRGUIActionsDatabase() = default;
  virtual ~CPVRGUIActionsDatabase() = default;

  /*!
   * @brief Reset the TV database to it's initial state and delete all the data.
   * @param bResetEPGOnly True to only reset the EPG database, false to reset both PVR and EPG
   * database.
   * @return true on success, false otherwise.
   */
  bool ResetPVRDatabase(bool bResetEPGOnly);

private:
  CPVRGUIActionsDatabase(const CPVRGUIActionsDatabase&) = delete;
  CPVRGUIActionsDatabase const& operator=(CPVRGUIActionsDatabase const&) = delete;
};

} // namespace PVR
