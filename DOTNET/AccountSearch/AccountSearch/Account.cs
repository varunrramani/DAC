using System;

namespace AccountSearch
{
    class Account
    {
        static int id;
        int accId;
        String name;

        public Account(String name)
        {
            this.name = name;
            accId = ++id;
        }

        public int AccId
        {
            get { return accId; }
        }

        public String Name
        {
            get { return name; }
            set { this.name = value; }
        }

        public override string ToString()
        {
            return String.Format("Account ID: {0}\tName: {1}", AccId, Name);
        }
    }
}
