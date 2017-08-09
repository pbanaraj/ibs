(function($) {
  Drupal.behaviors.MyNetworth = {
    attach: function (context, settings) {
      /*$(document).on({
        mouseover: function () {
          $(this).parent().next().css("display", "block");
        },
        mouseout: function () {
          $(this).parent().next().css("display", "none");
        }
      }, "a.help-item");*/

      cl_calculateMyNetworth = function() {
        var CL_ta=0;
        var CL_tl=0;
        var CL_mon;
        for(i=1; i<16; i++) {
          CL_mon = $("input[name=a" + i + "]").val();
          if (typeof(CL_mon) == undefined || isNaN(CL_mon) || !CL_mon) $("input[name=a" + i + "]").val(0);
          if(CL_mon && !isNaN(CL_mon) ) {
            CL_ta += parseFloat(CL_mon);
          }
        }

        for(i=1; i<9; i++) {
          CL_mon = $("input[name=l" + i + "]").val();
          if (isNaN(CL_mon)|| !CL_mon) $("input[name=l" + i + "]").val(0);
          if(CL_mon && !isNaN(CL_mon)) {
            CL_tl += parseFloat(CL_mon);
          }
        }

        $("input[name=CL_ta]").val(Comma(Math.round(CL_ta)));
        $("input[name=CL_tl]").val(Comma(Math.round(CL_tl)));
        $("input[name=nw]").val(Comma(Math.round(CL_ta-CL_tl)));

        if(document.all) {
          document.borrow.CL_mon.value=CL_ta-CL_tl;
        }
        if(document.layers) {
          //document.layers['result'].document.borrow.CL_mon.value=CL_ta-CL_tl;
          
          //CL_display('result');
        }
      }
      // Resets inputs.
      resetMyNetworth = function() {
        var CL_mon, CL_mon1, CL_mon2, CL_mon3;
        for(i=1;i<16;i++) {
          $("input[name=a" + i + "]").val("");
        }

        for(i=1;i<9;i++) {
          $("input[name=l" + i + "]").val("");
        }

        $("input[name=CL_ta]").val("");
        $("input[name=CL_tl]").val("");
        $("input[name=nw]").val("");
      }

      CL_hid = function(viewShow) {
        if (document.layers) {
          content = document.layers[viewShow];
        }
        else if (document.all) {
          content = document.all(viewShow).style;
        }
        content.visibility = hidden;
      }
    }
  };
})(jQuery);

function Comma(number) {
  number = '' + number;
  if (number.length > 3) {
    var mod = number.length % 3;
    var output = (mod > 0 ? (number.substring(0,mod)) : '');
    for (i=0 ; i < Math.floor(number.length / 3); i++) {
      if ((mod == 0) && (i == 0))
      output += number.substring(mod+ 3 * i, mod + 3 * i + 3);
      else 
      output+= ',' + number.substring(mod + 3 * i, mod + 3 * i + 3);
    }
    return (output);
  }
  else return number;
}

var CL_viewHide;
if (document.layers) {
  visible = 'show';

  hidden = 'hide';

}
else if (document.all) {
  visible = 'visible';
  hidden = 'hidden';
}

function NumberCheck(evt) {
  var charCode = (evt.which) ? evt.which : evt.keyCode;
  if (charCode != 46 && charCode > 31 && (charCode < 48 || charCode > 57)&&evt.keyCode!=190) {
    return false;
  }
  return true;
}

function cl_check(fld,typ) {
  if (typ == "int") {
    if (isNaN(fld.value)) {
      fld.value="";
      alert('Please enter a Number in the given field');
      fld.focus();
      return false;
  }

  var val = document.getElementById('chk').value;
  var dot=val.indexOf(".");
  var total = val.length - (val.indexOf(".") + 1);
  if (total > 2 && dot > -1) {
    alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
    document.getElementById('chk').value="";
    document.getElementById('chk').focus();
    return false;
  }

  var val = document.getElementById('land').value;
  var dot = val.indexOf(".");
  var total = val.length - (val.indexOf(".") + 1);
  if(total > 2 && dot > -1) {
    alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
    document.getElementById('land').value = "";
    document.getElementById('land').focus();
    return false;
    }

    var val = document.getElementById('Farm_House').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('Farm_House').value = "";
      document.getElementById('Farm_House').focus();
      return false;
    }

    var val = document.getElementById('bullion').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('bullion').value = "";
      document.getElementById('bullion').focus();
      return false;
    }

    var val = document.getElementById('equity').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('equity').value = "";
      document.getElementById('equity').focus();
      return false;
    }

    var val = document.getElementById('equity').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('equity').value = "";
      document.getElementById('equity').focus();
      return false;
    }

    var val = document.getElementById('equity').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('equity').value = "";
      document.getElementById('equity').focus();
      return false;
    }

    var val = document.getElementById('bonds').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('bonds').value = "";
      document.getElementById('bonds').focus();
      return false;
    }

    var val = document.getElementById('insurance').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('insurance').value = "";
      document.getElementById('insurance').focus();
      return false;
    }

    var val = document.getElementById('deposit').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('deposit').value = "";
      document.getElementById('deposit').focus();
      return false;
    }

    var val = document.getElementById('mutual').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('mutual').value = "";
      document.getElementById('mutual').focus();
      return false;
    }

    var val = document.getElementById('savings').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('savings').value = "";
      document.getElementById('savings').focus();
      return false;
    }

    var val = document.getElementById('provident').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('provident').value = "";
      document.getElementById('provident').focus();
      return false;
    }

    var val = document.getElementById('savings_acc').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('savings_acc').value = "";
      document.getElementById('savings_acc').focus();
      return false;
    }

    var val = document.getElementById('Current_ac').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('Current_ac').value = "";
      document.getElementById('Current_ac').focus();
      return false;
    }

    var val = document.getElementById('Cash').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('Cash').value = "";
      document.getElementById('Cash').focus();
      return false;
    }

    var val = document.getElementById('other').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('other').value = "";
      document.getElementById('other').focus();
      return false;
    }

    var val = document.getElementById('libalities').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('libalities').value = "";
      document.getElementById('libalities').focus();
      return false;
    }

    var val = document.getElementById('loan').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('loan').value = "";
      document.getElementById('loan').focus();
      return false;
    }

    var val = document.getElementById('P_loan').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('P_loan').value = "";
      document.getElementById('P_loan').focus();
      return false;
    }

    var val = document.getElementById('c_loan').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('c_loan').value = "";
      document.getElementById('c_loan').focus();
      return false;
    }

    var val = document.getElementById('other_brow').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('other_brow').value = "";
      document.getElementById('other_brow').focus();
      return false;
    }

    var val = document.getElementById('unpaid').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('unpaid').value = "";
      document.getElementById('unpaid').focus();
      return false;
    }

    var val = document.getElementById('credit').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('credit').value = "";
      document.getElementById('credit').focus();
      return false;
    }

    var val = document.getElementById('ot_liab').value;
    var dot = val.indexOf(".");
    var total = val.length - (val.indexOf(".") + 1);
    if (total > 2 && dot > -1) {
      alert("!!!! Please Enter Valid No. Only 2 Digits Are Allowed After Decimal. !!!!");
      document.getElementById('ot_liab').value = "";
      document.getElementById('ot_liab').focus();
      return false;
    }
  }
  return true;
}

function Chkval() {
  var num = parsefloat(chk.value);
  var str = num.tofixed(13);
  str = str.substring(0, str.length - 7);
}

function validateDecimal(decimalValue) {
  var rx = /^\d+(?:\.\d{1,2})?$/

  if (rx.test(decimalValue)) {
    return true;
  }
  else {
    return false;
  }
}

function CL_display(viewShow) {
  if (document.layers) {
    content = document.layers[viewShow];
  }
  else if (document.all) {
    content = document.all(viewShow).style;
  }
  content.visibility = visible;
}

function cl_validate(frm) {
  return true;
}
