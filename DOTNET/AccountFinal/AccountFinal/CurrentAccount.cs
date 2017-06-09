using System;

namespace AccountFinal
{
    class CurrentAccount : Account
    {
        String type;
        public CurrentAccount(String name, Double balance, String type)
            : base(name, balance)
        {
            this.type = type;
        }

        public override void Withdraw(int amount)
        {
            WithdrawEvent withdrawEvent = new WithdrawEvent();
            if (amount < 0)
            {
                withdrawEvent.withdrawEventHandler += WithdrawFailed;
                withdrawEvent.onWithdraw(this.Name, this.Balance);
                throw new WithdrawException("Amount cannot be less than 0", Name, Balance);
            }
            Balance = Balance - amount;
            withdrawEvent.withdrawEventHandler += WithdrawSuccessful;
            withdrawEvent.onWithdraw(Name, Balance);
        }
    }
}
