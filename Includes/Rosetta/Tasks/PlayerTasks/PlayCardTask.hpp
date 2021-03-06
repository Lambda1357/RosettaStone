// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#ifndef ROSETTASTONE_PLAY_CARD_TASK_HPP
#define ROSETTASTONE_PLAY_CARD_TASK_HPP

#include <Rosetta/Tasks/Tasks.hpp>

namespace RosettaStone::PlayerTasks
{
//!
//! \brief PlayCardTask class.
//!
//! This class represents the task for playing card from hand.
//! Then it runs each task according to the card type.
//!
class PlayCardTask : public ITask
{
 public:
    //! Constructs task with given \p source, \p fieldPos and \p target.
    //! \param source A pointer to source entity to play card.
    //! \param target A pointer to target entity to receive power.
    //! \param fieldPos A value indicating where to place card.
    PlayCardTask(Entity* source, Entity* target = nullptr, int fieldPos = -1);

    //! PlayCardTask wrapper for minion without target and field position.
    //! \param player The player to run task.
    //! \param source A pointer to source entity to play card.
    //! \return Generated PlayCardTask for intended purpose.
    static PlayCardTask Minion(Player& player, Entity* source);

    //! PlayCardTask wrapper for minion.
    //! \param player The player to run task.
    //! \param source A pointer to source entity to play card.
    //! \param target A pointer to target entity to receive power.
    //! \return Generated PlayCardTask for intended purpose.
    static PlayCardTask MinionTarget(Player& player, Entity* source,
                                     Entity* target);

    //! PlayCardTask wrapper for spell without target.
    //! \param player The player to run task.
    //! \param source A pointer to source entity to play card.
    //! \return Generated PlayCardTask for intended purpose.
    static PlayCardTask Spell(Player& player, Entity* source);

    //! PlayCardTask wrapper for spell.
    //! \param player The player to run task.
    //! \param source A pointer to source entity to play card.
    //! \param target A pointer to target entity to receive power.
    //! \return Generated PlayCardTask for intended purpose.
    static PlayCardTask SpellTarget(Player& player, Entity* source,
                                    Entity* target);

    //! PlayCardTask wrapper for weapon without target.
    //! \param player The player to run task.
    //! \param source A pointer to source entity to play card.
    //! \return Generated PlayCardTask for intended purpose.
    static PlayCardTask Weapon(Player& player, Entity* source);

    //! Returns task ID.
    //! \return Task ID.
    TaskID GetTaskID() const override;

 private:
    //! Processes task logic internally and returns meta data.
    //! \param player The player to run task.
    //! \return The result of task processing.
    TaskStatus Impl(Player& player) override;

    int m_fieldPos = -1;
};
}  // namespace RosettaStone::PlayerTasks

#endif  // ROSETTASTONE_PLAY_CARD_TASK_HPP
