using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WCFServiceLogin
{
    interface IRepository
    {
        bool InsertMyLog(String Id, String Password);
        List<Log> Display();
    }
}
