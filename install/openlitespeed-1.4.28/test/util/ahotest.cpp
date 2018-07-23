/*****************************************************************************
*    Open LiteSpeed is an open source HTTP server.                           *
*    Copyright (C) 2013 - 2015  LiteSpeed Technologies, Inc.                 *
*                                                                            *
*    This program is free software: you can redistribute it and/or modify    *
*    it under the terms of the GNU General Public License as published by    *
*    the Free Software Foundation, either version 3 of the License, or       *
*    (at your option) any later version.                                     *
*                                                                            *
*    This program is distributed in the hope that it will be useful,         *
*    but WITHOUT ANY WARRANTY; without even the implied warranty of          *
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the            *
*    GNU General Public License for more details.                            *
*                                                                            *
*    You should have received a copy of the GNU General Public License       *
*    along with this program. If not, see http://www.gnu.org/licenses/.      *
*****************************************************************************/
#ifdef RUN_TEST

#include <iostream>
#include "ahotest.h"
#include "unittest-cpp/UnitTest++.h"


const char *inputErr[] =
{
    "set-cookie",
    ".cookie",
    "expiressys.user_objects",
    "sys.user_triggers",
    "@@spid",
    "msysaces",
    "instr",
    "sys.user_views",
    "mysql.",
    "sys.tab",
    "charindex",
    "locate",
    "sys.user_catalog",
    "constraint_type",
    "msysobjects",
    "attnotnull",
    "select",
    "sys.user_tables",
    "sys.user_constraints",
    "sys.user_tab_columns",
    "waitfor",
    "sys.all_tables",
    "msysrelationships",
    "msyscolumns",
    "msysqueriessubstr",
    "xtype",
    "textpos",
    "all_objects",
    "rownum",
    "sysfilegroups",
    "sysprocesses",
    "user_group",
    "sysobjects",
    "systables",
    "user_tables",
    "pg_attribute",
    "column_id",
    "user_password",
    "user_users",
    "attrelid",
    "user_tab_columns",
    "table_name",
    "pg_class",
    "user_constraints",
    "user_objects",
    "object_type",
    "sysconstraints",
    "mb_users",
    "column_name",
    "atttypid",
    "substring",
    "object_id",
    "syscat",
    "sysibm",
    "user_ind_columns",
    "syscolumns",
    "sysdba",
    "object_name",
    "sqrt",
    "insert",
    "date",
    "instr",
    "floor",
    "autonomous_transaction",
    "print",
    "encode",
    "coalesce",
    "if",
    "degrees",
    "release_lock",
    "procedure_analyse",
    "password",
    "least",
    "cr32",
    "subdate",
    "xp_filelist",
    "owa_util",
    "trim",
    "xp_regenumkeys",
    "charset",
    "ciel",
    "bit_or",
    "delete",
    "time",
    "month",
    "xp_execresultset",
    "round",
    "dba_users",
    "is",
    "master_pos_wait",
    "decode",
    "unhex",
    "char_length",
    "strcmp",
    "rtrim",
    "'sa'",
    "version",
    "ord",
    "xp_makecab",
    "truncate",
    "last",
    "concat",
    "coercibility",
    "right",
    "length",
    "ascii",
    "var_samp",
    "char",
    "extract",
    "get_",
    "bit_length",
    "xp_regread",
    "export_set",
    "aes_decrypt",
    "name_const",
    "left",
    "conv",
    "bin",
    "not_in",
    "infile",
    "substr",
    "uuid",
    "is_srvrolemember",
    "var_pop",
    "ln",
    "aes_encrypt",
    "outfile",
    "current_date",
    "quote",
    "in",
    "user",
    "locate",
    "@@version",
    "exp",
    "current_timestamp",
    "sql_longvarchar",
    "values",
    "subtime",
    "xp_loginconfig",
    "sin",
    "xp_regaddmultistring",
    "replace",
    "tan",
    "xmltype",
    "character_length",
    "cast",
    "current_time",
    "varchar",
    "position",
    "to_number",
    "addtime",
    "mid",
    "found_rows",
    "stddev",
    "xp_availablemedia",
    "substring",
    "dumpfile",
    "isnull",
    "cot",
    "select",
    "concat_ws",
    "convert",
    "uncompress",
    "radians",
    "uncompressed_length",
    "acos",
    "'sqloledb'",
    "dbms_pipe.receive_message",
    "utl_http",
    "cieling",
    "row_count",
    "benchmark",
    "sec_to_time",
    "sysdate",
    "hour",
    "current_user",
    "utc_",
    "curdate",
    "nvarchar",
    "schema",
    "data_type",
    "lcase",
    "inner",
    "make_set",
    "day",
    "tbcreator",
    "sum",
    "sign",
    "adddate",
    "ltrim",
    "variance",
    "weight_string",
    "second",
    "microsecond",
    "system_user",
    "abs",
    "ifnull",
    "minute",
    "unix_timestamp",
    "collation",
    "curtime",
    "lower",
    "repeat",
    "sp_oacreate",
    "group_concat",
    "sp_execute",
    "xp_ntsec",
    "xp_regdeletekey",
    "drop",
    "quarter",
    "local",
    "str_to_date",
    "nullif",
    "from_",
    "old_password",
    "xp_regdeletevalue",
    "asin",
    "oct",
    "load_file",
    "sp_password",
    "bit_xor",
    "xp_regremovemultistring",
    "chr",
    "avg",
    "std",
    "openquery",
    "makedate",
    "database",
    "updatexml",
    "datediff",
    "now",
    "year",
    "mod",
    "bit_and",
    "lpad",
    "xp_enumdsn",
    "max",
    "period_",
    "soundex",
    "shutdown",
    "bit_count",
    "field",
    "connection_id",
    "sha",
    "default",
    "interval",
    "xp_dirtree",
    "reverse",
    "ucase",
    "compress",
    "xp_terminate_process",
    "md5",
    "rpad",
    "session_user",
    "find_in_set",
    "dump",
    "convert_tz",
    "having",
    "des_",
    "greatest",
    "xp_regenumvalues",
    "utl_file",
    "cos",
    "log",
    "pi",
    "sql_variant",
    "encrypt",
    "upper",
    "rand",
    "week",
    "min",
    "xp_cmdshell",
    "'msdasql'",
    "space",
    "sp_executesql",
    "elt",
    "pow",
    "'dbo'",
    "sp_makewebtask",
    "dbms_java",
    "to_",
    "format",
    "xp_regwrite",
    "sp_helpjscript",
    "onsubmit",
    "copyparentfolder",
    "document",
    "javascript",
    "meta",
    "onchange",
    "onmove",
    "onkeydown",
    "onkeyup",
    "activexobject",
    "onerror",
    "onmouseup",
    "ecmascript",
    "bexpression",
    "onmouseover",
    "vbscript:",
    "<![cdata[",
    "http:",
    ".innerhtml",
    "settimeout",
    "shell:",
    "onabort",
    "asfunction:",
    "onkeypress",
    "onmousedown",
    "onclick",
    ".fromcharcode",
    "background-image:",
    "x-javascript",
    "ondragdrop",
    "onblur",
    "mocha:",
    "javascript:",
    "onfocus",
    "lowsrc",
    "getparentfolder",
    "onresize",
    "@import",
    "alert",
    "script",
    "onselect",
    "onmouseout",
    "application",
    "onmousemove",
    "background",
    ".execscript",
    "livescript:",
    "vbscript",
    "getspecialfolder",
    ".addimport",
    "iframe",
    "onunload",
    "createtextrange",
    "<input",
    "onload.www_acl",
    ".htpasswd",
    ".htaccess",
    "httpd.conf",
    "boot.ini",
    "/etc/",
    ".htgroup",
    "global.asa",
    ".wwwaclnet.exe",
    "cmd.exe",
    "cmd",
    "telnet.exe",
    "wguest.exe",
    "ftp.exe",
    "nmap.exe",
    "wsh.exe",
    "rcmd.exe",
    "nc.exe",
    "cmd32.exechgrp",
    "cmd32",
    "uname",
    "kill",
    "localgroup",
    "wguest.exe",
    "nasm",
    "rcmd.exe",
    "nc.exe",
    "id",
    "nc",
    "tclsh",
    "finger",
    "tftp",
    "cmd",
    "chown",
    "chsh",
    "ping",
    "nmap.exe",
    "ps",
    "net.exe",
    "telnet.exe",
    "ls",
    "tclsh8",
    "ftp.exe",
    "ftp",
    "lsof",
    "xterm",
    "mail",
    "echo",
    "tracert",
    "nmap",
    "cmd.exe",
    "rm",
    "python",
    "cd",
    "traceroute",
    "chmod",
    "perl",
    "passwd",
    "wsh.exe",
    "cpp",
    "telnet",
    "gcc",
    "g++chgrp",
    "cmd32",
    "uname",
    "kill",
    "localgroup",
    "wguest.exe",
    "nasm",
    "rcmd.exe",
    "nc.exe",
    "id",
    "nc",
    "tclsh",
    "finger",
    "tftp",
    "cmd",
    "chown",
    "chsh",
    "ping",
    "nmap.exe",
    "ps",
    "net.exe",
    "telnet.exe",
    "ls",
    "tclsh8",
    "ftp.exe",
    "ftp",
    "lsof",
    "xterm",
    "mail",
    "echo",
    "tracert",
    "nmap",
    "cmd.exe",
    "rm",
    "python",
    "cd",
    "traceroute",
    "chmod",
    "perl",
    "passwd",
    "wsh.exe",
    "cpp",
    "telnet",
    "gcc",
    "g++<?"
};

static void checkErr()
{
    int count = 445;
    int i;
    size_t iOutStart = 0, iOutEnd = 0;
    ls_aho_state_t **outlast = (ls_aho_state_t **)malloc(sizeof(
                                   ls_aho_state_t **));
//     Aho *ac = new Aho( 1 );
    ls_aho_t *ac = ls_aho_new(1);
    for (i = 0; i < count; ++i)
    {
        if ((ls_aho_addpattern(ac, inputErr[i], strlen(inputErr[i])) == 0))
//         if ((ac->addPattern( inputErr[i], strlen( inputErr[i] ) )) == 0 )
        {
            std::cout << "Add patterns failed." << std::endl;
            ls_aho_delete(ac);
            return;
        }
    }
    if (ls_aho_maketree(ac) == 0)
    {
        std::cout << "Make tree failed." << std::endl;
        ls_aho_delete(ac);
        return;
    }

    if (ls_aho_optimizetree(ac) == 0)
    {
        std::cout << "Optimize failed." << std::endl;
        ls_aho_delete(ac);
        return;
    }
    ls_aho_search(ac, NULL, "_wpnonce", 8, 0, &iOutStart, &iOutEnd, outlast);
    ls_aho_delete(ac);
    return;
}

TEST(AhoTest)
{
    checkErr();
//     int iNumTests = 8;
//     size_t iOutStart = 0, iOutEnd = 0;
//     Aho *ac;
//     AhoState **outlast = (AhoState **)malloc( sizeof( AhoState ** ) );
//
//     std::cout << "Start Aho Test" << std::endl;
//
//     for( int i = 0; i < iNumTests; ++i )
//     {
//         ac = getTree(aTestAccept[i], aTestAcceptLen[i], aSensitive[i]);
//         if (ac == NULL)
//         {
//             std::cout << "Get Tree failed." << std::endl;
//             return;
//         }
//
//         ac->search( NULL, aTestInput[i], aTestInputLen[i], 0, &iOutStart, &iOutEnd, outlast );
//
//         CHECK( iOutStart == aOutStartRes[i] && iOutEnd == aOutEndRes[i] );
//         iOutStart = 0;
//         iOutEnd = 0;
//         delete ac;
//     }
//     free( outlast );
}

Aho *getTree(const char *acceptBuf[], int bufCount, int sensitive)
{
    int i;
    Aho *ac = new Aho(sensitive);

    for (i = 0; i < bufCount; ++i)
    {
        if ((ac->addPattern(acceptBuf[i], strlen(acceptBuf[i]))) == 0)
        {
            std::cout << "Add patterns failed." << std::endl;
            delete(ac);
            return NULL;
        }
    }

    if (ac->makeTree() == 0)
    {
        std::cout << "Make tree failed." << std::endl;
        delete(ac);
        return NULL;
    }

    if (ac->optimizeTree() == 0)
    {
        std::cout << "Optimize failed." << std::endl;
        delete(ac);
        return NULL;
    }

    return ac;
}

//input data causes problem
/*
set-cookie
.cookie
expiressys.user_objects
sys.user_triggers
@@spid
msysaces
instr
sys.user_views
mysql.
sys.tab
charindex
locate
sys.user_catalog
constraint_type
msysobjects
attnotnull
select
sys.user_tables
sys.user_constraints
sys.user_tab_columns
waitfor
sys.all_tables
msysrelationships
msyscolumns
msysqueriessubstr
xtype
textpos
all_objects
rownum
sysfilegroups
sysprocesses
user_group
sysobjects
systables
user_tables
pg_attribute
column_id
user_password
user_users
attrelid
user_tab_columns
table_name
pg_class
user_constraints
user_objects
object_type
sysconstraints
mb_users
column_name
atttypid
substring
object_id
syscat
sysibm
user_ind_columns
syscolumns
sysdba
object_name
sqrt
insert
date
instr
floor
autonomous_transaction
print
encode
coalesce
if
degrees
release_lock
procedure_analyse
password
least
cr32
subdate
xp_filelist
owa_util
trim
xp_regenumkeys
charset
ciel
bit_or
delete
time
month
xp_execresultset
round
dba_users
is
master_pos_wait
decode
unhex
char_length
strcmp
rtrim
'sa'
version
ord
xp_makecab
truncate
last
concat
coercibility
right
length
ascii
var_samp
char
extract
get_
bit_length
xp_regread
export_set
aes_decrypt
name_const
left
conv
bin
not_in
infile
substr
uuid
is_srvrolemember
var_pop
ln
aes_encrypt
outfile
current_date
quote
in
user
locate
@@version
exp
current_timestamp
sql_longvarchar
values
subtime
xp_loginconfig
sin
xp_regaddmultistring
replace
tan
xmltype
character_length
cast
current_time
varchar
position
to_number
addtime
mid
found_rows
stddev
xp_availablemedia
substring
dumpfile
isnull
cot
select
concat_ws
convert
uncompress
radians
uncompressed_length
acos
'sqloledb'
dbms_pipe.receive_message
utl_http
cieling
row_count
benchmark
sec_to_time
sysdate
hour
current_user
utc_
curdate
nvarchar
schema
data_type
lcase
inner
make_set
day
tbcreator
sum
sign
adddate
ltrim
variance
weight_string
second
microsecond
system_user
abs
ifnull
minute
unix_timestamp
collation
curtime
lower
repeat
sp_oacreate
group_concat
sp_execute
xp_ntsec
xp_regdeletekey
drop
quarter
local
str_to_date
nullif
from_
old_password
xp_regdeletevalue
asin
oct
load_file
sp_password
bit_xor
xp_regremovemultistring
chr
avg
std
openquery
makedate
database
updatexml
datediff
now
year
mod
bit_and
lpad
xp_enumdsn
max
period_
soundex
shutdown
bit_count
field
connection_id
sha
default
interval
xp_dirtree
reverse
ucase
compress
xp_terminate_process
md5
rpad
session_user
find_in_set
dump
convert_tz
having
des_
greatest
xp_regenumvalues
utl_file
cos
log
pi
sql_variant
encrypt
upper
rand
week
min
xp_cmdshell
'msdasql'
space
sp_executesql
elt
pow
'dbo'
sp_makewebtask
dbms_java
to_
format
xp_regwrite
sp_helpjscript
onsubmit
copyparentfolder
document
javascript
meta
onchange
onmove
onkeydown
onkeyup
activexobject
onerror
onmouseup
ecmascript
bexpression
onmouseover
vbscript:
<![cdata[
http:
.innerhtml
settimeout
shell:
onabort
asfunction:
onkeypress
onmousedown
onclick
.fromcharcode
background-image:
x-javascript
ondragdrop
onblur
mocha:
javascript:
onfocus
lowsrc
getparentfolder
onresize
@import
alert
script
onselect
onmouseout
application
onmousemove
background
.execscript
livescript:
vbscript
getspecialfolder
.addimport
iframe
onunload
createtextrange
<input
onload.www_acl
.htpasswd
.htaccess
httpd.conf
boot.ini
/etc/
.htgroup
global.asa
.wwwaclnet.exe
cmd.exe
cmd
telnet.exe
wguest.exe
ftp.exe
nmap.exe
wsh.exe
rcmd.exe
nc.exe
cmd32.exechgrp
cmd32
uname
kill
localgroup
wguest.exe
nasm
rcmd.exe
nc.exe
id
nc
tclsh
finger
tftp
cmd
chown
chsh
ping
nmap.exe
ps
net.exe
telnet.exe
ls
tclsh8
ftp.exe
ftp
lsof
xterm
mail
echo
tracert
nmap
cmd.exe
rm
python
cd
traceroute
chmod
perl
passwd
wsh.exe
cpp
telnet
gcc
g++chgrp
cmd32
uname
kill
localgroup
wguest.exe
nasm
rcmd.exe
nc.exe
id
nc
tclsh
finger
tftp
cmd
chown
chsh
ping
nmap.exe
ps
net.exe
telnet.exe
ls
tclsh8
ftp.exe
ftp
lsof
xterm
mail
echo
tracert
nmap
cmd.exe
rm
python
cd
traceroute
chmod
perl
passwd
wsh.exe
cpp
telnet
gcc
g++<?
*/
//search string "_wpnonce" should causes crash.


#endif


