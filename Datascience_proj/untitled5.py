#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Oct  7 01:57:19 2020

@author: kumar
"""

import glassDoorWebScrap as gs
import pandas as pd

path="/home/kumar/git/Datascience_proj/chromedriver_linux64/chromedriver"

df = gs.get_jobs('data scientist',15,False,path,15)
