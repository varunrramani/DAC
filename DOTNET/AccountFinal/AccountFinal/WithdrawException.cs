using System;

namespace AccountFinal
{
    class WithdrawException : ApplicationException
    {
        public String message;
        public readonly String name;
        public readonly Double balance;

        public WithdrawException(String message, String name, Double balance)
        {
            this.message = message;
            this.name = name;
            this.balance = balance;
        }
    }
}
