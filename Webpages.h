#include <pgmspace.h>

static const char PROGMEM css_p[] = R"=====(
/*!
Pure v0.6.0
Copyright 2014 Yahoo! Inc. All rights reserved.
Licensed under the BSD License.
https://github.com/yahoo/pure/blob/master/LICENSE.md
*/
/*!
normalize.css v^3.0 | MIT License | git.io/normalize
Copyright (c) Nicolas Gallagher and Jonathan Neal
*/
/*! normalize.css v3.0.2 | MIT License | git.io/normalize */html{font-family:sans-serif;-ms-text-size-adjust:100%;-webkit-text-size-adjust:100%}body{margin:0}article,aside,details,figcaption,figure,footer,header,hgroup,main,menu,nav,section,summary{display:block}audio,canvas,progress,video{display:inline-block;vertical-align:baseline}audio:not([controls]){display:none;height:0}[hidden],template{display:none}a{background-color:transparent}a:active,a:hover{outline:0}abbr[title]{border-bottom:1px dotted}b,strong{font-weight:700}dfn{font-style:italic}h1{font-size:2em;margin:.67em 0}mark{background:#ff0;color:#000}small{font-size:80%}sub,sup{font-size:75%;line-height:0;position:relative;vertical-align:baseline}sup{top:-.5em}sub{bottom:-.25em}img{border:0}svg:not(:root){overflow:hidden}figure{margin:1em 40px}hr{-moz-box-sizing:content-box;box-sizing:content-box;height:0}pre{overflow:auto}code,kbd,pre,samp{font-family:monospace,monospace;font-size:1em}button,input,optgroup,select,textarea{color:inherit;font:inherit;margin:0}button{overflow:visible}button,select{text-transform:none}button,html input[type=button],input[type=reset],input[type=submit]{-webkit-appearance:button;cursor:pointer}button[disabled],html input[disabled]{cursor:default}button::-moz-focus-inner,input::-moz-focus-inner{border:0;padding:0}input{line-height:normal}input[type=checkbox],input[type=radio]{box-sizing:border-box;padding:0}input[type=number]::-webkit-inner-spin-button,input[type=number]::-webkit-outer-spin-button{height:auto}input[type=search]{-webkit-appearance:textfield;-moz-box-sizing:content-box;-webkit-box-sizing:content-box;box-sizing:content-box}input[type=search]::-webkit-search-cancel-button,input[type=search]::-webkit-search-decoration{-webkit-appearance:none}fieldset{border:1px solid silver;margin:0 2px;padding:.35em .625em .75em}legend{border:0;padding:0}textarea{overflow:auto}optgroup{font-weight:700}table{border-collapse:collapse;border-spacing:0}td,th{padding:0}.hidden,[hidden]{display:none!important}.pure-img{max-width:100%;height:auto;display:block}.pure-g{letter-spacing:-.31em;*letter-spacing:normal;*word-spacing:-.43em;text-rendering:optimizespeed;font-family:FreeSans,Arimo,"Droid Sans",Helvetica,Arial,sans-serif;display:-webkit-flex;-webkit-flex-flow:row wrap;display:-ms-flexbox;-ms-flex-flow:row wrap;-ms-align-content:flex-start;-webkit-align-content:flex-start;align-content:flex-start}.opera-only :-o-prefocus,.pure-g{word-spacing:-.43em}.pure-u{display:inline-block;*display:inline;zoom:1;letter-spacing:normal;word-spacing:normal;vertical-align:top;text-rendering:auto}.pure-g [class *="pure-u"]{font-family:sans-serif}.pure-u-1,.pure-u-1-1,.pure-u-1-2,.pure-u-1-3,.pure-u-2-3,.pure-u-1-4,.pure-u-3-4,.pure-u-1-5,.pure-u-2-5,.pure-u-3-5,.pure-u-4-5,.pure-u-5-5,.pure-u-1-6,.pure-u-5-6,.pure-u-1-8,.pure-u-3-8,.pure-u-5-8,.pure-u-7-8,.pure-u-1-12,.pure-u-5-12,.pure-u-7-12,.pure-u-11-12,.pure-u-1-24,.pure-u-2-24,.pure-u-3-24,.pure-u-4-24,.pure-u-5-24,.pure-u-6-24,.pure-u-7-24,.pure-u-8-24,.pure-u-9-24,.pure-u-10-24,.pure-u-11-24,.pure-u-12-24,.pure-u-13-24,.pure-u-14-24,.pure-u-15-24,.pure-u-16-24,.pure-u-17-24,.pure-u-18-24,.pure-u-19-24,.pure-u-20-24,.pure-u-21-24,.pure-u-22-24,.pure-u-23-24,.pure-u-24-24{display:inline-block;*display:inline;zoom:1;letter-spacing:normal;word-spacing:normal;vertical-align:top;text-rendering:auto}.pure-u-1-24{width:4.1667%;*width:4.1357%}.pure-u-1-12,.pure-u-2-24{width:8.3333%;*width:8.3023%}.pure-u-1-8,.pure-u-3-24{width:12.5%;*width:12.469%}.pure-u-1-6,.pure-u-4-24{width:16.6667%;*width:16.6357%}.pure-u-1-5{width:20%;*width:19.969%}.pure-u-5-24{width:20.8333%;*width:20.8023%}.pure-u-1-4,.pure-u-6-24{width:25%;*width:24.969%}.pure-u-7-24{width:29.1667%;*width:29.1357%}.pure-u-1-3,.pure-u-8-24{width:33.3333%;*width:33.3023%}.pure-u-3-8,.pure-u-9-24{width:37.5%;*width:37.469%}.pure-u-2-5{width:40%;*width:39.969%}.pure-u-5-12,.pure-u-10-24{width:41.6667%;*width:41.6357%}.pure-u-11-24{width:45.8333%;*width:45.8023%}.pure-u-1-2,.pure-u-12-24{width:50%;*width:49.969%}.pure-u-13-24{width:54.1667%;*width:54.1357%}.pure-u-7-12,.pure-u-14-24{width:58.3333%;*width:58.3023%}.pure-u-3-5{width:60%;*width:59.969%}.pure-u-5-8,.pure-u-15-24{width:62.5%;*width:62.469%}.pure-u-2-3,.pure-u-16-24{width:66.6667%;*width:66.6357%}.pure-u-17-24{width:70.8333%;*width:70.8023%}.pure-u-3-4,.pure-u-18-24{width:75%;*width:74.969%}.pure-u-19-24{width:79.1667%;*width:79.1357%}.pure-u-4-5{width:80%;*width:79.969%}.pure-u-5-6,.pure-u-20-24{width:83.3333%;*width:83.3023%}.pure-u-7-8,.pure-u-21-24{width:87.5%;*width:87.469%}.pure-u-11-12,.pure-u-22-24{width:91.6667%;*width:91.6357%}.pure-u-23-24{width:95.8333%;*width:95.8023%}.pure-u-1,.pure-u-1-1,.pure-u-5-5,.pure-u-24-24{width:100%}.pure-button{display:inline-block;zoom:1;line-height:normal;white-space:nowrap;vertical-align:middle;text-align:center;cursor:pointer;-webkit-user-drag:none;-webkit-user-select:none;-moz-user-select:none;-ms-user-select:none;user-select:none;-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box}.pure-button::-moz-focus-inner{padding:0;border:0}.pure-button{font-family:inherit;font-size:100%;padding:.5em 1em;color:#444;color:rgba(0,0,0,.8);border:1px solid #999;border:0 rgba(0,0,0,0);background-color:#E6E6E6;text-decoration:none;border-radius:2px}.pure-button-hover,.pure-button:hover,.pure-button:focus{filter:progid:DXImageTransform.Microsoft.gradient(startColorstr='#00000000', endColorstr='#1a000000', GradientType=0);background-image:-webkit-gradient(linear,0 0,0 100%,from(transparent),color-stop(40%,rgba(0,0,0,.05)),to(rgba(0,0,0,.1)));background-image:-webkit-linear-gradient(transparent,rgba(0,0,0,.05) 40%,rgba(0,0,0,.1));background-image:-moz-linear-gradient(top,rgba(0,0,0,.05) 0,rgba(0,0,0,.1));background-image:-o-linear-gradient(transparent,rgba(0,0,0,.05) 40%,rgba(0,0,0,.1));background-image:linear-gradient(transparent,rgba(0,0,0,.05) 40%,rgba(0,0,0,.1))}.pure-button:focus{outline:0}.pure-button-active,.pure-button:active{box-shadow:0 0 0 1px rgba(0,0,0,.15) inset,0 0 6px rgba(0,0,0,.2) inset;border-color:#000\9}.pure-button[disabled],.pure-button-disabled,.pure-button-disabled:hover,.pure-button-disabled:focus,.pure-button-disabled:active{border:0;background-image:none;filter:progid:DXImageTransform.Microsoft.gradient(enabled=false);filter:alpha(opacity=40);-khtml-opacity:.4;-moz-opacity:.4;opacity:.4;cursor:not-allowed;box-shadow:none}.pure-button-hidden{display:none}.pure-button::-moz-focus-inner{padding:0;border:0}.pure-button-primary,.pure-button-selected,a.pure-button-primary,a.pure-button-selected{background-color:#0078e7;color:#fff}.pure-form input[type=text],.pure-form input[type=password],.pure-form input[type=email],.pure-form input[type=url],.pure-form input[type=date],.pure-form input[type=month],.pure-form input[type=time],.pure-form input[type=datetime],.pure-form input[type=datetime-local],.pure-form input[type=week],.pure-form input[type=number],.pure-form input[type=search],.pure-form input[type=tel],.pure-form input[type=color],.pure-form select,.pure-form textarea{padding:.5em .6em;display:inline-block;border:1px solid #ccc;box-shadow:inset 0 1px 3px #ddd;border-radius:4px;vertical-align:middle;-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box}.pure-form input:not([type]){padding:.5em .6em;display:inline-block;border:1px solid #ccc;box-shadow:inset 0 1px 3px #ddd;border-radius:4px;-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box}.pure-form input[type=color]{padding:.2em .5em}.pure-form input[type=text]:focus,.pure-form input[type=password]:focus,.pure-form input[type=email]:focus,.pure-form input[type=url]:focus,.pure-form input[type=date]:focus,.pure-form input[type=month]:focus,.pure-form input[type=time]:focus,.pure-form input[type=datetime]:focus,.pure-form input[type=datetime-local]:focus,.pure-form input[type=week]:focus,.pure-form input[type=number]:focus,.pure-form input[type=search]:focus,.pure-form input[type=tel]:focus,.pure-form input[type=color]:focus,.pure-form select:focus,.pure-form textarea:focus{outline:0;border-color:#129FEA}.pure-form input:not([type]):focus{outline:0;border-color:#129FEA}.pure-form input[type=file]:focus,.pure-form input[type=radio]:focus,.pure-form input[type=checkbox]:focus{outline:thin solid #129FEA;outline:1px auto #129FEA}.pure-form .pure-checkbox,.pure-form .pure-radio{margin:.5em 0;display:block}.pure-form input[type=text][disabled],.pure-form input[type=password][disabled],.pure-form input[type=email][disabled],.pure-form input[type=url][disabled],.pure-form input[type=date][disabled],.pure-form input[type=month][disabled],.pure-form input[type=time][disabled],.pure-form input[type=datetime][disabled],.pure-form input[type=datetime-local][disabled],.pure-form input[type=week][disabled],.pure-form input[type=number][disabled],.pure-form input[type=search][disabled],.pure-form input[type=tel][disabled],.pure-form input[type=color][disabled],.pure-form select[disabled],.pure-form textarea[disabled]{cursor:not-allowed;background-color:#eaeded;color:#cad2d3}.pure-form input:not([type])[disabled]{cursor:not-allowed;background-color:#eaeded;color:#cad2d3}.pure-form input[readonly],.pure-form select[readonly],.pure-form textarea[readonly]{background-color:#eee;color:#777;border-color:#ccc}.pure-form input:focus:invalid,.pure-form textarea:focus:invalid,.pure-form select:focus:invalid{color:#b94a48;border-color:#e9322d}.pure-form input[type=file]:focus:invalid:focus,.pure-form input[type=radio]:focus:invalid:focus,.pure-form input[type=checkbox]:focus:invalid:focus{outline-color:#e9322d}.pure-form select{height:2.25em;border:1px solid #ccc;background-color:#fff}.pure-form select[multiple]{height:auto}.pure-form label{margin:.5em 0 .2em}.pure-form fieldset{margin:0;padding:.35em 0 .75em;border:0}.pure-form legend{display:block;width:100%;padding:.3em 0;margin-bottom:.3em;color:#333;border-bottom:1px solid #e5e5e5}.pure-form-stacked input[type=text],.pure-form-stacked input[type=password],.pure-form-stacked input[type=email],.pure-form-stacked input[type=url],.pure-form-stacked input[type=date],.pure-form-stacked input[type=month],.pure-form-stacked input[type=time],.pure-form-stacked input[type=datetime],.pure-form-stacked input[type=datetime-local],.pure-form-stacked input[type=week],.pure-form-stacked input[type=number],.pure-form-stacked input[type=search],.pure-form-stacked input[type=tel],.pure-form-stacked input[type=color],.pure-form-stacked input[type=file],.pure-form-stacked select,.pure-form-stacked label,.pure-form-stacked textarea{display:block;margin:.25em 0}.pure-form-stacked input:not([type]){display:block;margin:.25em 0}.pure-form-aligned input,.pure-form-aligned textarea,.pure-form-aligned select,.pure-form-aligned .pure-help-inline,.pure-form-message-inline{display:inline-block;*display:inline;*zoom:1;vertical-align:middle}.pure-form-aligned textarea{vertical-align:top}.pure-form-aligned .pure-control-group{margin-bottom:.5em}.pure-form-aligned .pure-control-group label{text-align:right;display:inline-block;vertical-align:middle;width:10em;margin:0 1em 0 0}.pure-form-aligned .pure-controls{margin:1.5em 0 0 11em}.pure-form input.pure-input-rounded,.pure-form .pure-input-rounded{border-radius:2em;padding:.5em 1em}.pure-form .pure-group fieldset{margin-bottom:10px}.pure-form .pure-group input,.pure-form .pure-group textarea{display:block;padding:10px;margin:0 0 -1px;border-radius:0;position:relative;top:-1px}.pure-form .pure-group input:focus,.pure-form .pure-group textarea:focus{z-index:3}.pure-form .pure-group input:first-child,.pure-form .pure-group textarea:first-child{top:1px;border-radius:4px 4px 0 0;margin:0}.pure-form .pure-group input:first-child:last-child,.pure-form .pure-group textarea:first-child:last-child{top:1px;border-radius:4px;margin:0}.pure-form .pure-group input:last-child,.pure-form .pure-group textarea:last-child{top:-2px;border-radius:0 0 4px 4px;margin:0}.pure-form .pure-group button{margin:.35em 0}.pure-form .pure-input-1{width:100%}.pure-form .pure-input-2-3{width:66%}.pure-form .pure-input-1-2{width:50%}.pure-form .pure-input-1-3{width:33%}.pure-form .pure-input-1-4{width:25%}.pure-form .pure-help-inline,.pure-form-message-inline{display:inline-block;padding-left:.3em;color:#666;vertical-align:middle;font-size:.875em}.pure-form-message{display:block;color:#666;font-size:.875em}@media only screen and (max-width :480px){.pure-form button[type=submit]{margin:.7em 0 0}.pure-form input:not([type]),.pure-form input[type=text],.pure-form input[type=password],.pure-form input[type=email],.pure-form input[type=url],.pure-form input[type=date],.pure-form input[type=month],.pure-form input[type=time],.pure-form input[type=datetime],.pure-form input[type=datetime-local],.pure-form input[type=week],.pure-form input[type=number],.pure-form input[type=search],.pure-form input[type=tel],.pure-form input[type=color],.pure-form label{margin-bottom:.3em;display:block}.pure-group input:not([type]),.pure-group input[type=text],.pure-group input[type=password],.pure-group input[type=email],.pure-group input[type=url],.pure-group input[type=date],.pure-group input[type=month],.pure-group input[type=time],.pure-group input[type=datetime],.pure-group input[type=datetime-local],.pure-group input[type=week],.pure-group input[type=number],.pure-group input[type=search],.pure-group input[type=tel],.pure-group input[type=color]{margin-bottom:0}.pure-form-aligned .pure-control-group label{margin-bottom:.3em;text-align:left;display:block;width:100%}.pure-form-aligned .pure-controls{margin:1.5em 0 0}.pure-form .pure-help-inline,.pure-form-message-inline,.pure-form-message{display:block;font-size:.75em;padding:.2em 0 .8em}}.pure-menu{-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box}.pure-menu-fixed{position:fixed;left:0;top:0;z-index:3}.pure-menu-list,.pure-menu-item{position:relative}.pure-menu-list{list-style:none;margin:0;padding:0}.pure-menu-item{padding:0;margin:0;height:100%}.pure-menu-link,.pure-menu-heading{display:block;text-decoration:none;white-space:nowrap}.pure-menu-horizontal{width:100%;white-space:nowrap}.pure-menu-horizontal .pure-menu-list{display:inline-block}.pure-menu-horizontal .pure-menu-item,.pure-menu-horizontal .pure-menu-heading,.pure-menu-horizontal .pure-menu-separator{display:inline-block;*display:inline;zoom:1;vertical-align:middle}.pure-menu-item .pure-menu-item{display:block}.pure-menu-children{display:none;position:absolute;left:100%;top:0;margin:0;padding:0;z-index:3}.pure-menu-horizontal .pure-menu-children{left:0;top:auto;width:inherit}.pure-menu-allow-hover:hover>.pure-menu-children,.pure-menu-active>.pure-menu-children{display:block;position:absolute}.pure-menu-has-children>.pure-menu-link:after{padding-left:.5em;content:"\25B8";font-size:small}.pure-menu-horizontal .pure-menu-has-children>.pure-menu-link:after{content:"\25BE"}.pure-menu-scrollable{overflow-y:scroll;overflow-x:hidden}.pure-menu-scrollable .pure-menu-list{display:block}.pure-menu-horizontal.pure-menu-scrollable .pure-menu-list{display:inline-block}.pure-menu-horizontal.pure-menu-scrollable{white-space:nowrap;overflow-y:hidden;overflow-x:auto;-ms-overflow-style:none;-webkit-overflow-scrolling:touch;padding:.5em 0}.pure-menu-horizontal.pure-menu-scrollable::-webkit-scrollbar{display:none}.pure-menu-separator{background-color:#ccc;height:1px;margin:.3em 0}.pure-menu-horizontal .pure-menu-separator{width:1px;height:1.3em;margin:0 .3em}.pure-menu-heading{text-transform:uppercase;color:#565d64}.pure-menu-link{color:#777}.pure-menu-children{background-color:#fff}.pure-menu-link,.pure-menu-disabled,.pure-menu-heading{padding:.5em 1em}.pure-menu-disabled{opacity:.5}.pure-menu-disabled .pure-menu-link:hover{background-color:transparent}.pure-menu-active>.pure-menu-link,.pure-menu-link:hover,.pure-menu-link:focus{background-color:#eee}.pure-menu-selected .pure-menu-link,.pure-menu-selected .pure-menu-link:visited{color:#000}.pure-table{border-collapse:collapse;border-spacing:0;empty-cells:show;border:1px solid #cbcbcb}.pure-table caption{color:#000;font:italic 85%/1 arial,sans-serif;padding:1em 0;text-align:center}.pure-table td,.pure-table th{border-left:1px solid #cbcbcb;border-width:0 0 0 1px;font-size:inherit;margin:0;overflow:visible;padding:.5em 1em}.pure-table td:first-child,.pure-table th:first-child{border-left-width:0}.pure-table thead{background-color:#e0e0e0;color:#000;text-align:left;vertical-align:bottom}.pure-table td{background-color:transparent}.pure-table-odd td{background-color:#f2f2f2}.pure-table-striped tr:nth-child(2n-1) td{background-color:#f2f2f2}.pure-table-bordered td{border-bottom:1px solid #cbcbcb}.pure-table-bordered tbody>tr:last-child>td{border-bottom-width:0}.pure-table-horizontal td,.pure-table-horizontal th{border-width:0 0 1px;border-bottom:1px solid #cbcbcb}.pure-table-horizontal tbody>tr:last-child>td{border-bottom-width:0}
body{color: #526066;}
h2, h3{letter-spacing: 0.25em; text-transform: uppercase; font-weight: 600;}
p{line-height: 1.6em;}
.l-content{margin: 0 auto; margin-top: 56px;}
.l-box{padding: 0.5em 2em;}
.p-m{box-shadow: 0 1px 1px rgba(0,0,0, 0.10);}
.a-t,.if{max-width: 980px; margin: 0 auto;}
.a-t{margin-bottom: 3.125em; text-align: center;}
.at{border: 1px none #ddd; margin: 1em 0.5em 1em; padding: 0 0 0em;}
.at-water .at-header{background: #00a0e9;}
.at-air   .at-header{background: #f39800;}
.at-pressure .at-header{background: #8fc31f;}
.at-humid .at-header{background: #920783;}
.at-level .at-header{background: #1d2088;}
.at-lighting .at-header{background: #ddd120;}
.at-fan .at-header{background: #e4007f;}
.at-header {padding-top:50px;height: 250px; width: 300px; background: #111; color: #fff; border-radius: 50%; -webkit-border-radius: 50%; -moz-border-radius: 50%;}
.at-header h2{margin: 0; padding-top: 2em; font-size: 1em; font-weight: normal;}
.at-val{font-size: 6em; margin: 0.2em 0 0; font-weight: 100;}
.at-val span{display: block;text-transform: uppercase;font-size: 0.2em;padding-bottom: 2em;font-weight: 400;color: rgba(255, 255, 255, 0.5);*color: #fff;}
.button-choose{border: 1px solid #ccc; background: #fff; color: #333; border-radius: 2em; font-weight: bold; position: relative; bottom: -1.5em;}.if-head{color: black; font-weight: 500;}.footer{background: #111; color: #888; text-align: center;}.footer a{color: #ddd;}.btn-red{background: rgb(202, 60, 60);color: #fff;}.pm-fix{top:0px; background: rgba(255,255,255,0.8); position: fixed;}#setting{display: none;}
)=====";

static const char PROGMEM page_p[] = R"=====(
<!doctype html><html lang="en"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width, initial-scale=1.0"><title>WiFi Aquatan Manager</title><link rel="stylesheet" href="/pure.css"><script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script><link rel="stylesheet" href="http://yui.yahooapis.com/pure/0.6.0/grids-responsive-min.css"></head><body><div class="p-m pure-menu-horizontal pure-menu-scrollable pm-fix"> <a href="#" class="pure-menu-heading"><img width='32' height='32' title='' alt='' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAYAAABzenr0AAAAAXNSR0IB2cksfwAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAACXBIWXMAAAsTAAALEwEAmpwYAAABWWlUWHRYTUw6Y29tLmFkb2JlLnhtcAAAAAAAPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iWE1QIENvcmUgNS40LjAiPgogICA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPgogICAgICA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIgogICAgICAgICAgICB4bWxuczp0aWZmPSJodHRwOi8vbnMuYWRvYmUuY29tL3RpZmYvMS4wLyI+CiAgICAgICAgIDx0aWZmOk9yaWVudGF0aW9uPjE8L3RpZmY6T3JpZW50YXRpb24+CiAgICAgIDwvcmRmOkRlc2NyaXB0aW9uPgogICA8L3JkZjpSREY+CjwveDp4bXBtZXRhPgpMwidZAAABnklEQVRYCb2XUVLEMAxDW4b7X7mgwssorp2mtDQzYMeWJcW7fLBs27bo56VzEPp4SVgyEl9/o+77+SSZiAf3xYxEdCKeOib2+6yBSCYBCJX7AVv1HbuMDEDUDdhF/SjCTKzbWJ9W34FZInCwSnhaXEOjDUBEFD4KqnbrZBuQiIu6QFYX/oqxjj8z4IJZLhOVkQw/NBcNAFYkz0hVmzURcbo3bjegopo+gJE28N3341jqzHCPseNyAw7ESCbgOOVgY70TsmbHGf8KsiEGsh4GPDqOHA7z8ZNWG3CgSCDyOjl9MJkYPWZanDHQwBMJQpUJzLa+fwQUIYl6Z33wmhcWvNfJW3x6AxDzUu6KGCLuPd+Ag5/K4zY7cYn81wamH3BlA/E10yIj4JsbOKxfxqoNZOA7G8j49sVkGxA4EytJdqb613ButIHMRC2Td4biGsk2ANXpMMA/Rj1wqzYAp0z4JtyU18HHeIZZRxuIZE/f98ecbSCKnr0o4qt72+RVAxXhTL2JOvjMwJ0Xp4Iurvzud6ASqepRf1lf/Nf8IK7CF5KQSk/UTlbbAAAAAElFTkSuQmCC'></a> <ul class="pure-menu-list"> <li class="pure-menu-item"><a href="#temp" class="pure-menu-link">Temperature</a></li><li class="pure-menu-item"><a href="#pres" class="pure-menu-link">Pressure</a></li><li class="pure-menu-item"><a href="#level" class="pure-menu-link">Level</a></li><li class="pure-menu-item"><a href="#led" class="pure-menu-link">Led</a></li><li class="pure-menu-item"><a href="#fan" class="pure-menu-link">Fan</a></li><li class="pure-menu-item"><a href="#setting" class="pure-menu-link">Setting</a></li></ul></div><div class="l-content"> <div class="a-t pure-g"> <div id="temp" class="pure-u-1 pure-u-md-1-3"> <div class="at at-water"> <div class="at-header"> <h2>Water Temperature</h2> <span class="at-val"> <div id="wt">40.0</div><span>&deg;C</span> </span> </div></div></div><div id="atemp" class="pure-u-1 pure-u-md-1-3"> <div class="at at-air"> <div class="at-header"> <h2>Air Temperature</h2> <span class="at-val"> <div id="at">40.0</div><span>&deg;C</span> </span> </div></div></div><div id="pres" class="pure-u-1 pure-u-md-1-3"> <div class="at at-pressure"> <div class="at-header"> <h2>Air Pressure</h2> <span class="at-val"> <div id="ap">1013.3</div><span>hPa</span> </span> </div></div></div><div id="humid" class="pure-u-1 pure-u-md-1-3"> <div class="at at-humid"> <div class="at-header"> <h2>Humidity</h2> <span class="at-val"> <div id="hu">100</div><span>%</span> </span> </div></div></div><div id="level" class="pure-u-1 pure-u-md-1-3"> <div class="at at-level"> <div class="at-header"> <h2>Water Level</h2> <span class="at-val"> <div id="wl">9</div><span>cm</span> </span> </div></div></div><div id="led" class="pure-u-1 pure-u-md-1-3"> <div class="at at-lighting"> <div class="at-header"> <h2>Lighting</h2> <span class="at-val"> <div id="ls">ON</div><span id="lv">255</span> </span> </div></div></div><div id="fan" class="pure-u-1 pure-u-md-1-3"> <div class="at at-fan"> <div class="at-header"> <h2>Fan</h2> <span class="at-val"> <div id="fs">OFF</div><span id="fv">0</span> </span> </div></div></div></div><div class="pure-g"> <div class="pure-u-1-5 pure-u-md-1-2"> <button id="sbtn" type="" class="pure-button">Show settings</button> </div><div class="pure-u-1-5 pure-u-md-1-2"> </div></div><div id="setting"> <div id="sched" class="if pure-g"> <div class="pure-u-1 pure-u-md-1-2"> <div class="l-box"> <h3 class="if-head">Lighting schedule</h3> <p>You can change the schedule of lighting.</p><p> <form name="/schedule" id="schedule" class="pure-form pure-form-stacked"> <fieldset><legend>Scheduler</legend><div class="pure-g"> <div class="pure-u-1 pure-u-md-1-1"> <input id="use_schedule" value="1" type="checkbox"> Activate schedule </div></div><legend>Turn on time</legend><div class="pure-g"> <div class="pure-u-1 pure-u-md-1-5"> <input id="on_h" class="pure-u-22-24" type="text" placeholder="hour"> </div><div class="pure-u-1 pure-u-md-1-5"> <input id="on_m" class="pure-u-22-24" type="text" placeholder="min"> </div><div class="pure-u-1 pure-u-md-3-5"> </div></div><legend>Turn off time</legend><div class="pure-g"> <div class="pure-u-1 pure-u-md-1-5"> <input id="off_h" class="pure-u-22-24" type="text" placeholder="hour"> </div><div class="pure-u-1 pure-u-md-1-5"> <input id="off_m" class="pure-u-22-24" type="text" placeholder="min"> </div><div class="pure-u-1 pure-u-md-3-5"> </div></div><button id="ssub" type="submit" class="pure-button pure-button-primary">Submit</button> </fieldset> </form> </p></div></div><div id="thres" class="pure-u-1 pure-u-md-1-2"> <div class="l-box"> <h3 class="if-head">Auto Fan Control</h3> <p>You can set the temperature limits for activating cooling fan. The cooling fan tries to maintain the water temperature between the higher and lower limits. </p><p> <form id="autofan" class="pure-form pure-form-stacked"> <fieldset><legend>Temperature control</legend><div class="pure-g"> <div class="pure-u-1 pure-u-md-1-1"> <input id="use_autofan" value="1" type="checkbox"> Activate control </div></div><legend>Water Temperature</legend><div class="pure-g"> <div class="pure-u-1 pure-u-md-1-2"> <label for="hi_l">Higher</label> <input id="hi_l" class="pure-u-20-24" type="text" placeholder="Higher limit"> </div><div class="pure-u-1 pure-u-md-1-2"> <label for="lo_l">Lower</label> <input id="lo_l" class="pure-u-20-24" type="text" placeholder="Lower limit"> </div></div><button id="tsub" type="submit" class="pure-button pure-button-primary">Submit</button> </fieldset> </form> </p></div></div><div id="wlevel" class="pure-u-1 pure-u-md-1-2"> <div class="l-box"> <h3 class="if-head">Water Level</h3> <p>You can set the water levels to notify warning and emergency. The bi-color LED lights in orange for warning and in red for emergency.</p><p> <form id="wlv" class="pure-form pure-form-stacked"> <fieldset><legend>Water levels</legend><div class="pure-g"> <div class="pure-u-1 pure-u-md-1-2"> <label for="lv_wa">Warning</label> <input id="lv_wa" class="pure-u-20-24" type="text" placeholder="Level (cm)"> </div><div class="pure-u-1 pure-u-md-1-2"> <label for="lv_em">Emergency</label> <input id="lv_em" class="pure-u-20-24" type="text" placeholder="Level (cm)"> </div></div><button id="wsub" type="submit" class="pure-button pure-button-primary">Submit</button> </fieldset> </form> </p></div></div><div id="twitter" class="pure-u-1 pure-u-md-1-2"> <div class="l-box"> <h3 class="if-head">Twitter setting</h3> <p>You can use twitter via <a href="http://stewgate-u.appspot.com">Stewgate</a>.</p><p> <form id="twitconf" class="pure-form pure-form-stacked"> <fieldset><legend>Twitter post</legend><div class="pure-g"> <div class="pure-u-1 pure-u-md-1-1"> <input id="use_twitter" value="1" type="checkbox"> Enable twitter post </div></div><legend>Access token</legend><div class="pure-g"> <div class="pure-u-1 pure-u-md-1-1"> <input id="stew_token" class="pure-u-20-24" type="text" placeholder="Stewgate access token"> </div></div><button id="twsub" type="submit" class="pure-button pure-button-primary">Submit</button> </fieldset> </form> </p></div></div><div class="pure-u-1 pure-u-md-1-2"> <div class="l-box"> <h3 class="if-head">Reset WiFi settings</h3> <p>You can reset the WiFi AP setting by clicking this button.</p><p> <form action="/wifireset" class="pure-form pure-form-stacked"> <fieldset><button type="submit" class="btn-red pure-button">Reset</button> </fieldset> </form> </p></div></div><div class="pure-u-1 pure-u-md-1-2"> <div class="l-box"> <h3 class="if-head">Reset ALL settings</h3> <p>You can reset the ALL setting by clicking this button.</p><p> <form action="/reset" class="pure-form pure-form-stacked"> <fieldset><button type="submit" class="btn-red pure-button">Reset</button> </fieldset> </form> </p></div></div></div></div></div><div class="footer l-box"> <p> WiFi Aquatan Monitor by @omzn 2015 / All rights researved </p></div><script type="text/javascript">$(function(){$('a[href^=#]').click(function(){var speed=400;var href=$(this).attr("href");var target=$(href=="#" || href=="" ? 'html' : href);var position=target.offset().top - 48;$('body,html').animate({scrollTop:position}, speed, 'swing');return false;});});$('form#schedule').submit(function(ev){$.post('/schedule',"use_schedule="+$('#use_schedule').prop('checked').toString()+"&on_h="+$('#on_h').val()+"&on_m="+$('#on_m').val()+"&off_h="+$('#off_h').val()+"&off_m="+$('#off_m').val(),read1,"json");$('#ssub').prop('disabled', true);return false;});$('form#autofan').submit(function(ev){$.post('/autofan',"use_autofan="+$('#use_autofan').prop('checked').toString()+"&hi_l="+$('#hi_l').val()+"&lo_l="+$('#lo_l').val(),read2,"json");$('#tsub').prop('disabled', true);return false;});$('form#wlv').submit(function(ev){$.post('/wlevel',"lv_em="+$('#lv_em').val()+"&lv_wa="+$('#lv_wa').val(),read4,"json");$('#wsub').prop('disabled', true);return false;});$('form#twitconf').submit(function(ev){$.post('/twitconf',"use_twitter="+$('#use_twitter').prop('checked').toString()+"&stew_token="+$('#stew_token').val(),read3,"json");$('#twsub').prop('disabled', true);return false;});function read1(json){$('#on_h').val(json.on_h);$('#on_m').val(json.on_m);$('#off_h').val(json.off_h);$('#off_m').val(json.off_m);if (json.use_schedule==1){$('#use_schedule').prop("checked",true);}else{$('#use_schedule').prop("checked",false);}}function read2(json){$('#hi_l').val(json.hi_l);$('#lo_l').val(json.lo_l);if (json.use_autofan==1){$('#use_autofan').prop("checked",true);}else{$('#use_tnctl').prop("checked",false);}}function read3(json){$('#stew_token').val(json.stew_token);if (json.use_twitter==1){$('#use_twitter').prop("checked",true);}else{$('#use_twitter').prop("checked",false);}}function read4(json){$('#lv_wa').val(json.lv_wa);$('#lv_em').val(json.lv_em);}function upd(){$.getJSON('/measure',function(json){$('#wt').html(json.temp.toFixed(1).toString());$('#at').html(json.atemp.toFixed(1).toString());$('#ap').html(json.pressure.toFixed().toString());$('#wl').html(json.water_level.toString());$('#hu').html(json.humidity.toFixed(1).toString());$('#lv').html(json.led.toString());$('#fv').html(json.fan.toString());if ( json.led > 0){$('#ls').html("ON");}else{$('#ls').html("OFF");}if ( json.fan > 0){$('#fs').html("ON");}else{$('#fs').html("OFF");}});}function confset(){$.getJSON('/config',function(json){read1(json);read2(json);read3(json);read4(json);if($('#use_autofan').is(":checked")){$('#hi_l').prop('disabled', false);$('#lo_l').prop('disabled', false);}else{$('#tsub').prop('disabled', true);$('#hi_l').prop('disabled', true);$('#lo_l').prop('disabled', true);}if($('#use_schedule').is(":checked")){$('#on_h').prop('disabled', false);$('#on_m').prop('disabled', false);$('#off_h').prop('disabled', false);$('#off_m').prop('disabled', false);}else{$('#ssub').prop('disabled', true);$('#on_h').prop('disabled', true);$('#on_m').prop('disabled', true);$('#off_h').prop('disabled', true);$('#off_m').prop('disabled', true);}if($('#use_twitter').is(":checked")){$('#stew_token').prop('disabled', false);}else{$('#twsub').prop('disabled', true);$('#stew_token').prop('disabled', true);}});}$(function(){$('#use_schedule').click(function(){if($(this).is(":checked")){$('#on_h').prop('disabled', false);$('#on_m').prop('disabled', false);$('#off_h').prop('disabled', false);$('#off_m').prop('disabled', false);}else if($(this).is(":not(:checked)")){$('#ssub').prop('disabled', true);$('#on_h').prop('disabled', true);$('#on_m').prop('disabled', true);$('#off_h').prop('disabled', true);$('#off_m').prop('disabled', true);$.post('/schedule',"use_schedule="+$('#use_schedule').prop('checked').toString()+"&on_h="+$('#on_h').val()+"&on_m="+$('#on_m').val()+"&off_h="+$('#off_h').val()+"&off_m="+$('#off_m').val(),read1,"json");}});$('#use_autofan').click(function(){if($(this).is(":checked")){$('#hi_l').prop('disabled', false);$('#lo_l').prop('disabled', false);}else if($(this).is(":not(:checked)")){$('#tsub').prop('disabled', true);$('#hi_l').prop('disabled', true);$('#lo_l').prop('disabled', true);$.post('/autofan',"use_autofan="+$('#use_autofan').prop('checked').toString()+"&hi_l="+$('#hi_l').val()+"&lo_l="+$('#lo_l').val(),read2,"json");}});$('#use_twitter').click(function(){if($(this).is(":checked")){$('#twsub').prop('disabled', false);$('#stew_token').prop('disabled', false);}else if($(this).is(":not(:checked)")){$('#twsub').prop('disabled', true);$('#stew_token').prop('disabled', true);$.post('/twitconf',"use_twitter="+$('#use_twitter').prop('checked').toString()+"&stew_token="+$('#stew_token').val(),read3,"json");}});$('#ssub').prop('disabled', true);$('#tsub').prop('disabled', true);$('#wsub').prop('disabled', true);$('#twsub').prop('disabled', true);$('#stew_token').keyup(function(){if($(this).val() !=''){$('#twsub').prop('disabled', false);}});$('#lv_wa').keyup(function(){if($(this).val() !=''){$('#wsub').prop('disabled', false);}});$('#lv_em').keyup(function(){if($(this).val() !=''){$('#wsub').prop('disabled', false);}});$('#on_h').keyup(function(){if($(this).val() !=''){$('#ssub').prop('disabled', false);}});$('#on_m').keyup(function(){if($(this).val() !=''){$('#ssub').prop('disabled', false);}});$('#off_h').keyup(function(){if($(this).val() !=''){$('#ssub').prop('disabled', false);}});$('#off_m').keyup(function(){if($(this).val() !=''){$('#ssub').prop('disabled', false);}});$('#hi_l').keyup(function(){if($(this).val() !=''){$('#tsub').prop('disabled', false);}});$('#lo_l').keyup(function(){if($(this).val() !=''){$('#tsub').prop('disabled', false);}});$('#sbtn').click(function(){$('#setting').toggle();});confset();upd();setInterval("upd()",30000);});</script></body></html>
)=====";


