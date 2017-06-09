using System;

namespace AccountFinal
{
    delegate void WithdrawEventHandler(String name, Double balance);
    class WithdrawEvent
    {
        public event WithdrawEventHandler withdrawEventHandler;

        public void onWithdraw(String name, Double balance)
        {
            if (withdrawEventHandler != null)
            {
                withdrawEventHandler(name, balance);
            }
        }
    }
}
