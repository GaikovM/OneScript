﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ScriptEngine
{
    class CodePositionInfo
    {
        public int LineNumber { get; set; }
        public string Code { get; set; }

        public override string ToString()
        {
            return Code + "\nСтрока: " + LineNumber.ToString();
        }
    }
}
