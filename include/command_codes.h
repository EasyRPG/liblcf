/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#ifndef _COMMAND_CODES_H_
#define _COMMAND_CODES_H_

struct Cmd {
	#define PP_rpgEnumCommandCode(FUNC) \
		FUNC(END, 10) \
		 \
		FUNC(CallCommonEvent, 1005) \
		FUNC(ForceFlee, 1006) \
		FUNC(EnableCombo, 1007) \
		 \
		FUNC(ChangeClass, 1008) \
		FUNC(ChangeBattleCommands, 1009) \
		FUNC(ShowMessage, 10110) \
		FUNC(MessageOptions, 10120) \
		FUNC(ChangeFaceGraphic, 10130) \
		FUNC(ShowChoice, 10140) \
		FUNC(InputNumber, 10150) \
		FUNC(ControlSwitches, 10210) \
		FUNC(ControlVars, 10220) \
		FUNC(TimerOperation, 10230) \
		FUNC(ChangeGold, 10310) \
		FUNC(ChangeItems, 10320) \
		FUNC(ChangePartyMembers, 10330) \
		FUNC(ChangeExp, 10410) \
		FUNC(ChangeLevel, 10420) \
		FUNC(ChangeParameters, 10430) \
		FUNC(ChangeSkills, 10440) \
		FUNC(ChangeEquipment, 10450) \
		FUNC(ChangeHP, 10460) \
		FUNC(ChangeSP, 10470) \
		FUNC(ChangeCondition, 10480) \
		FUNC(FullHeal, 10490) \
		FUNC(SimulatedAttack, 10500) \
		FUNC(ChangeHeroName, 10610) \
		FUNC(ChangeHeroTitle, 10620) \
		FUNC(ChangeSpriteAssociation, 10630) \
		FUNC(ChangeActorFace, 10640) \
		FUNC(ChangeVehicleGraphic, 10650) \
		FUNC(ChangeSystemBGM, 10660) \
		FUNC(ChangeSystemSFX, 10670) \
		FUNC(ChangeSystemGraphics, 10680) \
		FUNC(ChangeScreenTransitions, 10690) \
		FUNC(EnemyEncounter, 10710) \
		FUNC(OpenShop, 10720) \
		FUNC(ShowInn, 10730) \
		FUNC(EnterHeroName, 10740) \
		FUNC(Teleport, 10810) \
		FUNC(MemorizeLocation, 10820) \
		FUNC(RecallToLocation, 10830) \
		FUNC(EnterExitVehicle, 10840) \
		FUNC(SetVehicleLocation, 10850) \
		FUNC(ChangeEventLocation, 10860) \
		FUNC(TradeEventLocations, 10870) \
		FUNC(StoreTerrainID, 10910) \
		FUNC(StoreEventID, 10920) \
		FUNC(EraseScreen, 11010) \
		FUNC(ShowScreen, 11020) \
		FUNC(TintScreen, 11030) \
		FUNC(FlashScreen, 11040) \
		FUNC(ShakeScreen, 11050) \
		FUNC(PanScreen, 11060) \
		FUNC(WeatherEffects, 11070) \
		FUNC(ShowPicture, 11110) \
		FUNC(MovePicture, 11120) \
		FUNC(ErasePicture, 11130) \
		FUNC(ShowBattleAnimation, 11210) \
		FUNC(SpriteTransparency, 11310) \
		FUNC(FlashSprite, 11320) \
		FUNC(MoveEvent, 11330) \
		FUNC(ProceedWithMovement, 11340) \
		FUNC(HaltAllMovement, 11350) \
		FUNC(Wait, 11410) \
		FUNC(PlayBGM, 11510) \
		FUNC(FadeOutBGM, 11520) \
		FUNC(MemorizeBGM, 11530) \
		FUNC(PlayMemorizedBGM, 11540) \
		FUNC(PlaySound, 11550) \
		FUNC(PlayMovie, 11560) \
		FUNC(KeyInputProc, 11610) \
		FUNC(ChangeMapTileset, 11710) \
		FUNC(ChangePBG, 11720) \
		FUNC(ChangeEncounterRate, 11740) \
		FUNC(TileSubstitution, 11750) \
		FUNC(TeleportTargets, 11810) \
		FUNC(ChangeTeleportAccess, 11820) \
		FUNC(EscapeTarget, 11830) \
		FUNC(ChangeEscapeAccess, 11840) \
		FUNC(OpenSaveMenu, 11910) \
		FUNC(ChangeSaveAccess, 11930) \
		FUNC(OpenMainMenu, 11950) \
		FUNC(ChangeMainMenuAccess, 11960) \
		FUNC(ConditionalBranch, 12010) \
		FUNC(Label, 12110) \
		FUNC(JumpToLabel, 12120) \
		FUNC(Loop, 12210) \
		FUNC(BreakLoop, 12220) \
		FUNC(EndEventProcessing, 12310) \
		FUNC(EraseEvent, 12320) \
		FUNC(CallEvent, 12330) \
		FUNC(Comment, 12410) \
		FUNC(GameOver, 12420) \
		FUNC(ReturntoTitleScreen, 12510) \
		 \
		FUNC(ChangeMonsterHP, 13110) \
		FUNC(ChangeMonsterMP, 13120) \
		FUNC(ChangeMonsterCondition, 13130) \
		FUNC(ShowHiddenMonster, 13150) \
		FUNC(ChangeBattleBG, 13210) \
		FUNC(ShowBattleAnimation_B, 13260) \
		FUNC(ConditionalBranch_B, 13310) \
		FUNC(TerminateBattle, 13410) \
		 \
		FUNC(ShowMessage_2, 20110) \
		FUNC(ShowChoiceOption, 20140) \
		FUNC(ShowChoiceEnd, 20141) \
		FUNC(VictoryHandler, 20710) \
		FUNC(EscapeHandler, 20711) \
		FUNC(DefeatHandler, 20712) \
		FUNC(EndBattle, 20713) \
		FUNC(Transaction, 20720) \
		FUNC(NoTransaction, 20721) \
		FUNC(EndShop, 20722) \
		FUNC(Stay, 20730) \
		FUNC(NoStay, 20731) \
		FUNC(EndInn, 20732) \
		FUNC(ElseBranch, 22010) \
		FUNC(EndBranch, 22011) \
		FUNC(EndLoop, 22210) \
		FUNC(Comment_2, 22410) \
		 \
		FUNC(ElseBranch_B, 23310) \
		FUNC(EndBranch_B, 23311) \

	enum CommandCodes {
		#define PP_enum(VAL, CODE) VAL = CODE,
		PP_rpgEnumCommandCode(PP_enum)
		#undef PP_enum

		DUMMY = -1
	};
};

#endif

