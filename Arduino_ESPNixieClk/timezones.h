const char *timezones = R"(
<select name="timeZone" id="zone" onchange="document.getElementById('key_custom2').value = this.value">
<option value=GMT0>Africa/Abidjan</option>
<option value=GMT0>Africa/Accra</option>
<option value=EAT-3>Africa/Addis_Ababa</option>
<option value=CET-1>Africa/Algiers</option>
<option value=EAT-3>Africa/Asmara</option>
<option value=EAT-3>Africa/Asmera</option>
<option value=GMT0>Africa/Bamako</option>
<option value=WAT-1>Africa/Bangui</option>
<option value=GMT0>Africa/Banjul</option>
<option value=GMT0>Africa/Bissau</option>
<option value=CAT-2>Africa/Blantyre</option>
<option value=WAT-1>Africa/Brazzaville</option>
<option value=CAT-2>Africa/Bujumbura</option>
<option value=EET-2>Africa/Cairo</option>
<option value=WET0WEST,M3.5.0,M10.5.0/3>Africa/Casablanca</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Africa/Ceuta</option>
<option value=GMT0>Africa/Conakry</option>
<option value=GMT0>Africa/Dakar</option>
<option value=EAT-3>Africa/Dar_es_Salaam</option>
<option value=EAT-3>Africa/Djibouti</option>
<option value=WAT-1>Africa/Douala</option>
<option value=WET0WEST,M3.5.0,M10.5.0/3>Africa/El_Aaiun</option>
<option value=GMT0>Africa/Freetown</option>
<option value=CAT-2>Africa/Gaborone</option>
<option value=CAT-2>Africa/Harare</option>
<option value=SAST-2>Africa/Johannesburg</option>
<option value=EAT-3>Africa/Juba</option>
<option value=EAT-3>Africa/Kampala</option>
<option value=EAT-3>Africa/Khartoum</option>
<option value=CAT-2>Africa/Kigali</option>
<option value=WAT-1>Africa/Kinshasa</option>
<option value=WAT-1>Africa/Lagos</option>
<option value=WAT-1>Africa/Libreville</option>
<option value=GMT0>Africa/Lome</option>
<option value=WAT-1>Africa/Luanda</option>
<option value=CAT-2>Africa/Lubumbashi</option>
<option value=CAT-2>Africa/Lusaka</option>
<option value=WAT-1>Africa/Malabo</option>
<option value=CAT-2>Africa/Maputo</option>
<option value=SAST-2>Africa/Maseru</option>
<option value=SAST-2>Africa/Mbabane</option>
<option value=EAT-3>Africa/Mogadishu</option>
<option value=GMT0>Africa/Monrovia</option>
<option value=EAT-3>Africa/Nairobi</option>
<option value=WAT-1>Africa/Ndjamena</option>
<option value=WAT-1>Africa/Niamey</option>
<option value=GMT0>Africa/Nouakchott</option>
<option value=GMT0>Africa/Ouagadougou</option>
<option value=WAT-1>Africa/Porto-Novo</option>
<option value=GMT0>Africa/Sao_Tome</option>
<option value=GMT0>Africa/Timbuktu</option>
<option value=EET-2>Africa/Tripoli</option>
<option value=CET-1>Africa/Tunis</option>
<option value=WAT-1WAST,M9.1.0,M4.1.0>Africa/Windhoek</option>
<option value=HST10HDT,M3.2.0,M11.1.0>America/Adak</option>
<option value=AKST9AKDT,M3.2.0,M11.1.0>America/Anchorage</option>
<option value=AST4>America/Anguilla</option>
<option value=AST4>America/Antigua</option>
<option value=BRT3>America/Araguaina</option>
<option value=ART3>America/Argentina/Buenos_Aires</option>
<option value=ART3>America/Argentina/Catamarca</option>
<option value=ART3>America/Argentina/ComodRivadavia</option>
<option value=ART3>America/Argentina/Cordoba</option>
<option value=ART3>America/Argentina/Jujuy</option>
<option value=ART3>America/Argentina/La_Rioja</option>
<option value=ART3>America/Argentina/Mendoza</option>
<option value=ART3>America/Argentina/Rio_Gallegos</option>
<option value=ART3>America/Argentina/Salta</option>
<option value=ART3>America/Argentina/San_Juan</option>
<option value=ART3>America/Argentina/San_Luis</option>
<option value=ART3>America/Argentina/Tucuman</option>
<option value=ART3>America/Argentina/Ushuaia</option>
<option value=AST4>America/Aruba</option>
<option value=PYT4PYST,M10.1.0/0,M3.4.0/0>America/Asuncion</option>
<option value=EST5>America/Atikokan</option>
<option value=HST10HDT,M3.2.0,M11.1.0>America/Atka</option>
<option value=BRT3>America/Bahia</option>
<option value=CST6CDT,M4.1.0,M10.5.0>America/Bahia_Banderas</option>
<option value=AST4>America/Barbados</option>
<option value=BRT3>America/Belem</option>
<option value=CST6>America/Belize</option>
<option value=AST4>America/Blanc-Sablon</option>
<option value=AMT4>America/Boa_Vista</option>
<option value=COT5>America/Bogota</option>
<option value=MST7MDT,M3.2.0,M11.1.0>America/Boise</option>
<option value=ART3>America/Buenos_Aires</option>
<option value=MST7MDT,M3.2.0,M11.1.0>America/Cambridge_Bay</option>
<option value=AMT4AMST,M10.3.0/0,M2.3.0/0>America/Campo_Grande</option>
<option value=EST5>America/Cancun</option>
<option value=VET4:30>America/Caracas</option>
<option value=ART3>America/Catamarca</option>
<option value=GFT3>America/Cayenne</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Cayman</option>
<option value=CST6CDT,M3.2.0,M11.1.0>America/Chicago</option>
<option value=MST7MDT,M4.1.0,M10.5.0>America/Chihuahua</option>
<option value=EST5>America/Coral_Harbour</option>
<option value=ART3>America/Cordoba</option>
<option value=CST6>America/Costa_Rica</option>
<option value=MST7>America/Creston</option>
<option value=AMT4AMST,M10.3.0/0,M2.3.0/0>America/Cuiaba</option>
<option value=AST4>America/Curacao</option>
<option value=GMT0>America/Danmarkshavn</option>
<option value=PST8PDT,M3.2.0,M11.1.0>America/Dawson</option>
<option value=MST7>America/Dawson_Creek</option>
<option value=MST7MDT,M3.2.0,M11.1.0>America/Denver</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Detroit</option>
<option value=AST4>America/Dominica</option>
<option value=MST7MDT,M3.2.0,M11.1.0>America/Edmonton</option>
<option value=ACT5>America/Eirunepe</option>
<option value=CST6>America/El_Salvador</option>
<option value=PST8PDT,M3.2.0,M11.1.0>America/Ensenada</option>
<option value=BRT3>America/Fortaleza</option>
<option value=MST7>America/Fort_Nelson</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Fort_Wayne</option>
<option value=AST4ADT,M3.2.0,M11.1.0>America/Glace_Bay</option>
<option value=WGT3WGST,M3.5.0/-2,M10.5.0/-1>America/Godthab</option>
<option value=AST4ADT,M3.2.0,M11.1.0>America/Goose_Bay</option>
<option value=AST4>America/Grand_Turk</option>
<option value=AST4>America/Grenada</option>
<option value=AST4>America/Guadeloupe</option>
<option value=CST6>America/Guatemala</option>
<option value=ECT5>America/Guayaquil</option>
<option value=GYT4>America/Guyana</option>
<option value=AST4ADT,M3.2.0,M11.1.0>America/Halifax</option>
<option value=CST5CDT,M3.2.0/0,M11.1.0/1>America/Havana</option>
<option value=MST7>America/Hermosillo</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Indiana/Indianapolis</option>
<option value=CST6CDT,M3.2.0,M11.1.0>America/Indiana/Knox</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Indiana/Marengo</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Indiana/Petersburg</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Indianapolis</option>
<option value=CST6CDT,M3.2.0,M11.1.0>America/Indiana/Tell_City</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Indiana/Vevay</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Indiana/Vincennes</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Indiana/Winamac</option>
<option value=MST7MDT,M3.2.0,M11.1.0>America/Inuvik</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Iqaluit</option>
<option value=EST5>America/Jamaica</option>
<option value=ART3>America/Jujuy</option>
<option value=AKST9AKDT,M3.2.0,M11.1.0>America/Juneau</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Kentucky/Louisville</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Kentucky/Monticello</option>
<option value=CST6CDT,M3.2.0,M11.1.0>America/Knox_IN</option>
<option value=AST4>America/Kralendijk</option>
<option value=BOT4>America/La_Paz</option>
<option value=PET5>America/Lima</option>
<option value=PST8PDT,M3.2.0,M11.1.0>America/Los_Angeles</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Louisville</option>
<option value=AST4>America/Lower_Princes</option>
<option value=BRT3>America/Maceio</option>
<option value=CST6>America/Managua</option>
<option value=AMT4>America/Manaus</option>
<option value=AST4>America/Marigot</option>
<option value=AST4>America/Martinique</option>
<option value=CST6CDT,M3.2.0,M11.1.0>America/Matamoros</option>
<option value=MST7MDT,M4.1.0,M10.5.0>America/Mazatlan</option>
<option value=ART3>America/Mendoza</option>
<option value=CST6CDT,M3.2.0,M11.1.0>America/Menominee</option>
<option value=CST6CDT,M4.1.0,M10.5.0>America/Merida</option>
<option value=PST8>America/Metlakatla</option>
<option value=CST6CDT,M4.1.0,M10.5.0>America/Mexico_City</option>
<option value=PMST3PMDT,M3.2.0,M11.1.0>America/Miquelon</option>
<option value=AST4ADT,M3.2.0,M11.1.0>America/Moncton</option>
<option value=CST6CDT,M4.1.0,M10.5.0>America/Monterrey</option>
<option value=UYT3>America/Montevideo</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Montreal</option>
<option value=AST4>America/Montserrat</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Nassau</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/New_York</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Nipigon</option>
<option value=AKST9AKDT,M3.2.0,M11.1.0>America/Nome</option>
<option value=FNT2>America/Noronha</option>
<option value=CST6CDT,M3.2.0,M11.1.0>America/North_Dakota/Beulah</option>
<option value=CST6CDT,M3.2.0,M11.1.0>America/North_Dakota/Center</option>
<option value=CST6CDT,M3.2.0,M11.1.0>America/North_Dakota/New_Salem</option>
<option value=MST7MDT,M3.2.0,M11.1.0>America/Ojinaga</option>
<option value=EST5>America/Panama</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Pangnirtung</option>
<option value=SRT3>America/Paramaribo</option>
<option value=MST7>America/Phoenix</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Port-au-Prince</option>
<option value=ACT5>America/Porto_Acre</option>
<option value=AST4>America/Port_of_Spain</option>
<option value=AMT4>America/Porto_Velho</option>
<option value=AST4>America/Puerto_Rico</option>
<option value=CST6CDT,M3.2.0,M11.1.0>America/Rainy_River</option>
<option value=CST6CDT,M3.2.0,M11.1.0>America/Rankin_Inlet</option>
<option value=BRT3>America/Recife</option>
<option value=CST6>America/Regina</option>
<option value=CST6CDT,M3.2.0,M11.1.0>America/Resolute</option>
<option value=ACT5>America/Rio_Branco</option>
<option value=ART3>America/Rosario</option>
<option value=PST8PDT,M4.1.0,M10.5.0>America/Santa_Isabel</option>
<option value=BRT3>America/Santarem</option>
<option value=CLT3>America/Santiago</option>
<option value=AST4>America/Santo_Domingo</option>
<option value=BRT3BRST,M10.3.0/0,M2.3.0/0>America/Sao_Paulo</option>
<option value=EGT1EGST,M3.5.0/0,M10.5.0/1>America/Scoresbysund</option>
<option value=MST7MDT,M3.2.0,M11.1.0>America/Shiprock</option>
<option value=AKST9AKDT,M3.2.0,M11.1.0>America/Sitka</option>
<option value=AST4>America/St_Barthelemy</option>
<option value=NST3:30NDT,M3.2.0,M11.1.0>America/St_Johns</option>
<option value=AST4>America/St_Kitts</option>
<option value=AST4>America/St_Lucia</option>
<option value=AST4>America/St_Thomas</option>
<option value=AST4>America/St_Vincent</option>
<option value=CST6>America/Swift_Current</option>
<option value=CST6>America/Tegucigalpa</option>
<option value=AST4ADT,M3.2.0,M11.1.0>America/Thule</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Thunder_Bay</option>
<option value=PST8PDT,M3.2.0,M11.1.0>America/Tijuana</option>
<option value=EST5EDT,M3.2.0,M11.1.0>America/Toronto</option>
<option value=AST4>America/Tortola</option>
<option value=PST8PDT,M3.2.0,M11.1.0>America/Vancouver</option>
<option value=AST4>America/Virgin</option>
<option value=PST8PDT,M3.2.0,M11.1.0>America/Whitehorse</option>
<option value=CST6CDT,M3.2.0,M11.1.0>America/Winnipeg</option>
<option value=AKST9AKDT,M3.2.0,M11.1.0>America/Yakutat</option>
<option value=MST7MDT,M3.2.0,M11.1.0>America/Yellowknife</option>
<option value=AWST-8>Antarctica/Casey</option>
<option value=DAVT-7>Antarctica/Davis</option>
<option value=DDUT-10>Antarctica/DumontDUrville</option>
<option value=MIST-11>Antarctica/Macquarie</option>
<option value=MAWT-5>Antarctica/Mawson</option>
<option value=NZST-12NZDT,M9.5.0,M4.1.0/3>Antarctica/McMurdo</option>
<option value=CLT3>Antarctica/Palmer</option>
<option value=ROTT3>Antarctica/Rothera</option>
<option value=NZST-12NZDT,M9.5.0,M4.1.0/3>Antarctica/South_Pole</option>
<option value=SYOT-3>Antarctica/Syowa</option>
<option value=UTC0CEST-2,M3.5.0/1,M10.5.0/3>Antarctica/Troll</option>
<option value=VOST-6>Antarctica/Vostok</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Arctic/Longyearbyen</option>
<option value=AST-3>Asia/Aden</option>
<option value=ALMT-6>Asia/Almaty</option>
<option value=EET-2EEST,M3.5.4/24,M10.5.5/1>Asia/Amman</option>
<option value=ANAT-12>Asia/Anadyr</option>
<option value=AQTT-5>Asia/Aqtau</option>
<option value=AQTT-5>Asia/Aqtobe</option>
<option value=TMT-5>Asia/Ashgabat</option>
<option value=TMT-5>Asia/Ashkhabad</option>
<option value=AST-3>Asia/Baghdad</option>
<option value=AST-3>Asia/Bahrain</option>
<option value=AZT-4AZST,M3.5.0/4,M10.5.0/5>Asia/Baku</option>
<option value=ICT-7>Asia/Bangkok</option>
<option value=EET-2EEST,M3.5.0/0,M10.5.0/0>Asia/Beirut</option>
<option value=KGT-6>Asia/Bishkek</option>
<option value=BNT-8>Asia/Brunei</option>
<option value=IST-5:30>Asia/Calcutta</option>
<option value=IRKT-8>Asia/Chita</option>
<option value=CHOT-8CHOST,M3.5.6,M9.5.6/0>Asia/Choibalsan</option>
<option value=CST-8>Asia/Chongqing</option>
<option value=CST-8>Asia/Chungking</option>
<option value=IST-5:30>Asia/Colombo</option>
<option value=BDT-6>Asia/Dacca</option>
<option value=EET-2EEST,M3.5.5/0,M10.5.5/0>Asia/Damascus</option>
<option value=BDT-6>Asia/Dhaka</option>
<option value=TLT-9>Asia/Dili</option>
<option value=GST-4>Asia/Dubai</option>
<option value=TJT-5>Asia/Dushanbe</option>
<option value=EET-2EEST,M3.5.5/24,M10.3.6/144>Asia/Gaza</option>
<option value=CST-8>Asia/Harbin</option>
<option value=EET-2EEST,M3.5.5/24,M10.3.6/144>Asia/Hebron</option>
<option value=ICT-7>Asia/Ho_Chi_Minh</option>
<option value=HKT-8>Asia/Hong_Kong</option>
<option value=HOVT-7HOVST,M3.5.6,M9.5.6/0>Asia/Hovd</option>
<option value=IRKT-8>Asia/Irkutsk</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Asia/Istanbul</option>
<option value=WIB-7>Asia/Jakarta</option>
<option value=WIT-9>Asia/Jayapura</option>
<option value=IST-2IDT,M3.4.4/26,M10.5.0>Asia/Jerusalem</option>
<option value=AFT-4:30>Asia/Kabul</option>
<option value=PETT-12>Asia/Kamchatka</option>
<option value=PKT-5>Asia/Karachi</option>
<option value=XJT-6>Asia/Kashgar</option>
<option value=NPT-5:45>Asia/Kathmandu</option>
<option value=NPT-5:45>Asia/Katmandu</option>
<option value=YAKT-9>Asia/Khandyga</option>
<option value=IST-5:30>Asia/Kolkata</option>
<option value=KRAT-7>Asia/Krasnoyarsk</option>
<option value=MYT-8>Asia/Kuala_Lumpur</option>
<option value=MYT-8>Asia/Kuching</option>
<option value=AST-3>Asia/Kuwait</option>
<option value=CST-8>Asia/Macao</option>
<option value=CST-8>Asia/Macau</option>
<option value=MAGT-10>Asia/Magadan</option>
<option value=WITA-8>Asia/Makassar</option>
<option value=PHT-8>Asia/Manila</option>
<option value=GST-4>Asia/Muscat</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Asia/Nicosia</option>
<option value=KRAT-7>Asia/Novokuznetsk</option>
<option value=NOVT-6>Asia/Novosibirsk</option>
<option value=OMST-6>Asia/Omsk</option>
<option value=ORAT-5>Asia/Oral</option>
<option value=ICT-7>Asia/Phnom_Penh</option>
<option value=WIB-7>Asia/Pontianak</option>
<option value=KST-8:30>Asia/Pyongyang</option>
<option value=AST-3>Asia/Qatar</option>
<option value=QYZT-6>Asia/Qyzylorda</option>
<option value=MMT-6:30>Asia/Rangoon</option>
<option value=AST-3>Asia/Riyadh</option>
<option value=ICT-7>Asia/Saigon</option>
<option value=SAKT-10>Asia/Sakhalin</option>
<option value=UZT-5>Asia/Samarkand</option>
<option value=KST-9>Asia/Seoul</option>
<option value=CST-8>Asia/Shanghai</option>
<option value=SGT-8>Asia/Singapore</option>
<option value=SRET-11>Asia/Srednekolymsk</option>
<option value=CST-8>Asia/Taipei</option>
<option value=UZT-5>Asia/Tashkent</option>
<option value=GET-4>Asia/Tbilisi</option>
<option value=IRST-3:30IRDT,80/0,264/0>Asia/Tehran</option>
<option value=IST-2IDT,M3.4.4/26,M10.5.0>Asia/Tel_Aviv</option>
<option value=BTT-6>Asia/Thimbu</option>
<option value=BTT-6>Asia/Thimphu</option>
<option value=JST-9>Asia/Tokyo</option>
<option value=WITA-8>Asia/Ujung_Pandang</option>
<option value=ULAT-8ULAST,M3.5.6,M9.5.6/0>Asia/Ulaanbaatar</option>
<option value=ULAT-8ULAST,M3.5.6,M9.5.6/0>Asia/Ulan_Bator</option>
<option value=XJT-6>Asia/Urumqi</option>
<option value=VLAT-10>Asia/Ust-Nera</option>
<option value=ICT-7>Asia/Vientiane</option>
<option value=VLAT-10>Asia/Vladivostok</option>
<option value=YAKT-9>Asia/Yakutsk</option>
<option value=YEKT-5>Asia/Yekaterinburg</option>
<option value=AMT-4>Asia/Yerevan</option>
<option value=AZOT1AZOST,M3.5.0/0,M10.5.0/1>Atlantic/Azores</option>
<option value=AST4ADT,M3.2.0,M11.1.0>Atlantic/Bermuda</option>
<option value=WET0WEST,M3.5.0/1,M10.5.0>Atlantic/Canary</option>
<option value=CVT1>Atlantic/Cape_Verde</option>
<option value=WET0WEST,M3.5.0/1,M10.5.0>Atlantic/Faeroe</option>
<option value=WET0WEST,M3.5.0/1,M10.5.0>Atlantic/Faroe</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Atlantic/Jan_Mayen</option>
<option value=WET0WEST,M3.5.0/1,M10.5.0>Atlantic/Madeira</option>
<option value=GMT0>Atlantic/Reykjavik</option>
<option value=GST2>Atlantic/South_Georgia</option>
<option value=FKST3>Atlantic/Stanley</option>
<option value=GMT0>Atlantic/St_Helena</option>
<option value=AEST-10AEDT,M10.1.0,M4.1.0/3>Australia/ACT</option>
<option value=ACST-9:30ACDT,M10.1.0,M4.1.0/3>Australia/Adelaide</option>
<option value=AEST-10>Australia/Brisbane</option>
<option value=ACST-9:30ACDT,M10.1.0,M4.1.0/3>Australia/Broken_Hill</option>
<option value=AEST-10AEDT,M10.1.0,M4.1.0/3>Australia/Canberra</option>
<option value=AEST-10AEDT,M10.1.0,M4.1.0/3>Australia/Currie</option>
<option value=ACST-9:30>Australia/Darwin</option>
<option value=ACWST-8:45>Australia/Eucla</option>
<option value=AEST-10AEDT,M10.1.0,M4.1.0/3>Australia/Hobart</option>
<option value=LHST-10:30LHDT-11,M10.1.0,M4.1.0>Australia/LHI</option>
<option value=AEST-10>Australia/Lindeman</option>
<option value=LHST-10:30LHDT-11,M10.1.0,M4.1.0>Australia/Lord_Howe</option>
<option value=AEST-10AEDT,M10.1.0,M4.1.0/3>Australia/Melbourne</option>
<option value=ACST-9:30>Australia/North</option>
<option value=AEST-10AEDT,M10.1.0,M4.1.0/3>Australia/NSW</option>
<option value=AWST-8>Australia/Perth</option>
<option value=AEST-10>Australia/Queensland</option>
<option value=ACST-9:30ACDT,M10.1.0,M4.1.0/3>Australia/South</option>
<option value=AEST-10AEDT,M10.1.0,M4.1.0/3>Australia/Sydney</option>
<option value=AEST-10AEDT,M10.1.0,M4.1.0/3>Australia/Tasmania</option>
<option value=AEST-10AEDT,M10.1.0,M4.1.0/3>Australia/Victoria</option>
<option value=AWST-8>Australia/West</option>
<option value=ACST-9:30ACDT,M10.1.0,M4.1.0/3>Australia/Yancowinna</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Amsterdam</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Andorra</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Europe/Athens</option>
<option value=GMT0BST,M3.5.0/1,M10.5.0>Europe/Belfast</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Belgrade</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Berlin</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Bratislava</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Brussels</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Europe/Bucharest</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Budapest</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Busingen</option>
<option value=EET-2EEST,M3.5.0,M10.5.0/3>Europe/Chisinau</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Copenhagen</option>
<option value=GMT0IST,M3.5.0/1,M10.5.0>Europe/Dublin</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Gibraltar</option>
<option value=GMT0BST,M3.5.0/1,M10.5.0>Europe/Guernsey</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Europe/Helsinki</option>
<option value=GMT0BST,M3.5.0/1,M10.5.0>Europe/Isle_of_Man</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Europe/Istanbul</option>
<option value=GMT0BST,M3.5.0/1,M10.5.0>Europe/Jersey</option>
<option value=EET-2>Europe/Kaliningrad</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Europe/Kiev</option>
<option value=WET0WEST,M3.5.0/1,M10.5.0>Europe/Lisbon</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Ljubljana</option>
<option value=GMT0BST,M3.5.0/1,M10.5.0>Europe/London</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Luxembourg</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Madrid</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Malta</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Europe/Mariehamn</option>
<option value=MSK-3>Europe/Minsk</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Monaco</option>
<option value=MSK-3>Europe/Moscow</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Europe/Nicosia</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Oslo</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Paris</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Podgorica</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Prague</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Europe/Riga</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Rome</option>
<option value=SAMT-4>Europe/Samara</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/San_Marino</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Sarajevo</option>
<option value=MSK-3>Europe/Simferopol</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Skopje</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Europe/Sofia</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Stockholm</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Europe/Tallinn</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Tirane</option>
<option value=EET-2EEST,M3.5.0,M10.5.0/3>Europe/Tiraspol</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Europe/Uzhgorod</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Vaduz</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Vatican</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Vienna</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Europe/Vilnius</option>
<option value=MSK-3>Europe/Volgograd</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Warsaw</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Zagreb</option>
<option value=EET-2EEST,M3.5.0/3,M10.5.0/4>Europe/Zaporozhye</option>
<option value=CET-1CEST,M3.5.0,M10.5.0/3>Europe/Zurich</option>
<option value=EAT-3>Indian/Antananarivo</option>
<option value=IOT-6>Indian/Chagos</option>
<option value=CXT-7>Indian/Christmas</option>
<option value=CCT-6:30>Indian/Cocos</option>
<option value=EAT-3>Indian/Comoro</option>
<option value=TFT-5>Indian/Kerguelen</option>
<option value=SCT-4>Indian/Mahe</option>
<option value=MVT-5>Indian/Maldives</option>
<option value=MUT-4>Indian/Mauritius</option>
<option value=EAT-3>Indian/Mayotte</option>
<option value=RET-4>Indian/Reunion</option>
<option value=WSST-13WSDT,M9.5.0/3,M4.1.0/4>Pacific/Apia</option>
<option value=NZST-12NZDT,M9.5.0,M4.1.0/3>Pacific/Auckland</option>
<option value=BST-11>Pacific/Bougainville</option>
<option value=CHAST-12:45CHADT,M9.5.0/2:45,M4.1.0/3:45>Pacific/Chatham</option>
<option value=CHUT-10>Pacific/Chuuk</option>
<option value=EAST5>Pacific/Easter</option>
<option value=VUT-11>Pacific/Efate</option>
<option value=PHOT-13>Pacific/Enderbury</option>
<option value=TKT-13>Pacific/Fakaofo</option>
<option value=FJT-12FJST,M11.1.0,M1.3.0/3>Pacific/Fiji</option>
<option value=TVT-12>Pacific/Funafuti</option>
<option value=GALT6>Pacific/Galapagos</option>
<option value=GAMT9>Pacific/Gambier</option>
<option value=SBT-11>Pacific/Guadalcanal</option>
<option value=ChST-10>Pacific/Guam</option>
<option value=HST10>Pacific/Honolulu</option>
<option value=HST10>Pacific/Johnston</option>
<option value=LINT-14>Pacific/Kiritimati</option>
<option value=KOST-11>Pacific/Kosrae</option>
<option value=MHT-12>Pacific/Kwajalein</option>
<option value=MHT-12>Pacific/Majuro</option>
<option value=MART9:30>Pacific/Marquesas</option>
<option value=SST11>Pacific/Midway</option>
<option value=NRT-12>Pacific/Nauru</option>
<option value=NUT11>Pacific/Niue</option>
<option value=NFT-11>Pacific/Norfolk</option>
<option value=NCT-11>Pacific/Noumea</option>
<option value=SST11>Pacific/Pago_Pago</option>
<option value=PWT-9>Pacific/Palau</option>
<option value=PST8>Pacific/Pitcairn</option>
<option value=PONT-11>Pacific/Pohnpei</option>
<option value=PONT-11>Pacific/Ponape</option>
<option value=PGT-10>Pacific/Port_Moresby</option>
<option value=CKT10>Pacific/Rarotonga</option>
<option value=ChST-10>Pacific/Saipan</option>
<option value=SST11>Pacific/Samoa</option>
<option value=TAHT10>Pacific/Tahiti</option>
<option value=GILT-12>Pacific/Tarawa</option>
<option value=TOT-13>Pacific/Tongatapu</option>
<option value=CHUT-10>Pacific/Truk</option>
<option value=WAKT-12>Pacific/Wake</option>
<option value=WFT-12>Pacific/Wallis</option>
<option value=CHUT-10>Pacific/Yap</option>
</select>
<script>
document.getElementById('zone').value = GMT0>Africa/Abidjan;
document.querySelector("[for='key_custom2']").hidden = true;
document.getElementById('key_custom2').hidden = true;
</script>)";