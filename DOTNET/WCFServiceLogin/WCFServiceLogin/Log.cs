using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.Web;

namespace WCFServiceLogin
{
    [DataContract]
    public class Log
    {
        [DataMember]
        public int Id { get; set; }

        [DataMember]
        public String Password { get; set; }
    }
}