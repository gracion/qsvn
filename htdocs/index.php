<?php

/***************************************************************************
 *   This file is part of QSvn Project http://qsvn.berlios.de              *
 *   Copyright (c) 2004-2005 Andreas Richter <ar@oszine.de>                *
/***************************************************************************/


require_once("mainfile.php");
require_once("content/menu.php");

htmlhead();
pagehead();

$action = $_GET['action'];

$contentfile = "content/".$action.".php";

if (file_exists($contentfile))
  include($contentfile);
else
  include("content/start.php");

pagefoot();
printmenu($action);
htmlfoot();
?>
